// default-initialize your members by default!
// John McFarlane, A9, Palo Alto, 2017-03-22

#include <array>
#include <cstring>

void scribble(char * s) {
    char buffer[100];
    std::strcpy(buffer, s);
}

void print_scribble() {
    // uninitialized memory!
    char buffer[100];

    // undefined behavior
    std::puts(buffer);
}

int main(int argv, char** argc) {
    scribble(argc[1]);
    print_scribble();

    void f1(); f1();
    void f2(); f2();
    void f3(); f3();
    void f4(); f4();
    void f5(); f5();
    void f6(); f6();
    void f7(); f7();
    void f8(); f8();
    void f9(); f9();
}
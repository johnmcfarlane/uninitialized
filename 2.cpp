#include <cassert>

// C++11 class with default member initialization
struct S {
    // members are default-initialized!
    int m = 0;
    int n[5] = { 0, 1, 2, 3, 4 };
};

void f2() {
    S local;
    assert(local.m == 0);   // safe!

    S * dynamic = new S;
    assert(dynamic->n[2] == 2);  // safe!
}
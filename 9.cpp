#include <cassert>

// initialization can be costly!
struct S1 {
    int m;
};

struct S2 {
    int m = 0;
};

S1* allocate1() {
    return new S1[100];
}

S2* allocate2() {
    return new S2[100];
}

void f9() {
    assert(allocate1() != allocate2());
}

// https://godbolt.org/g/ADjmc1

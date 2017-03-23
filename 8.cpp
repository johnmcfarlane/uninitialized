#include <cassert>

// C++11 class with default member, AND constructor, initialization
struct S {
    S() : m(0) {}   // wasted write??
    S(int init_m) : m(init_m) {}
    int m;  // why even bother, huh?
};

void f7() {
    S local;
    assert(local.m == 0);
}

// https://godbolt.org/g/HN2qNX

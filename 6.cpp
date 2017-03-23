#include <cassert>

// C++11 class with default member initialization now requires another constructor
struct S {
    S() = default;  // sheesh!
    S(int init_m) : m(init_m) {}
    int m = 0;
};

void f6() {
    S local1 {42};
    assert(local1.m == 42);

    S local2;
    assert(local2.m == 0);
}
#include <cassert>

// C++11 class with default member initialization now requires a constructor
struct S {
    S(int init_m) : m(init_m) {}
    int m = 0;
};


void f5() {
    S local1 {42};
    assert(local1.m == 42);

    // error: no matching constructor for initialization of 'S'
    //S local2;
}
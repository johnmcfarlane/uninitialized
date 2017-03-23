#include <cassert>

// C++11 class with default member initialization blocks aggregate initialization
struct S {
    int m = 0;
};

void f4() {
    // error: no matching constructor for initialization of 'S'
    //S local { 42 };
}

// note: this is not the same as having an implicit constructor

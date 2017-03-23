#include <cassert>

// C++98 class can be initialized with curlies
struct S {
    int m;
};

void f3() {
    // aggregate initialization
    S s { 42 };
    assert(s.m == 42);
}
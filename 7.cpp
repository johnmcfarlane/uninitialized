#include <cassert>

// C++98 class without default member initialization
struct S {
    S() = default;
    S(int init_m) : m(init_m) {}
    int m;  // why even bother, huh?
};

void f7() {
    S local;
    // local.m is indeterminate

    local.m = 0;
}
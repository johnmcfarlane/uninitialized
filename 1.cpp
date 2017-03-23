#include <cassert>

// C++98 class
struct S {
    int m;  // m is a fundamental scalar type
    int n[5];
    void* p;
};

// static storage
S global;

void f1() {
    // when scalars are initialized they are initialized to zero, false or nullptr
    assert(global.p == nullptr);

    // local storage
    S local;  // local.m is indeterminate
    local.m = 0;

    // dynamic storage
    S * dynamic = new S;    // dynamic.m is indeterminate
    dynamic->n[4] = 42;
}

// constexpr
static_assert(S().m == 0, "");

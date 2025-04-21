#include "core/math_utils.h"
int add(int a, int b) {
    return a + b;
}

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1); // ⚠ deep recursion
}
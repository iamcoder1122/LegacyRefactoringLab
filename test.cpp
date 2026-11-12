#include <cassert>
#include <cmath>
#include "order.h"

namespace {
bool approxEqual(double a, double b, double epsilon = 1e-9) {
    return std::fabs(a - b) < epsilon;
}
}

int main() {
    assert(approxEqual(calculateOrderTotal(250.0, 5), 1125.0));
    assert(approxEqual(calculateOrderTotal(100.0, 2), 200.0));
    assert(approxEqual(calculateOrderTotal(200.0, 5), 1000.0));
    assert(approxEqual(applyDiscount(1500.0), 1350.0));
    return 0;
}

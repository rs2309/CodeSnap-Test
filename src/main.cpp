#include "api/controller.h"
#include "core/math_utils.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
    Controller ctrl;
    ctrl.handleRequest("/status");

    std::vector<int> data;
    for (int i = 0; i < 100; ++i)
    {
        data.push_back(i); // ⚠ no reserve
    }

    std::cout << "Result: " << add(10, 20) << std::endl;
    std::cout << "Factorial(5): " << factorial(5) << std::endl;

    writeShared();
    accessWithLock();

    return 0;
}

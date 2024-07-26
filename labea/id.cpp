#include <iostream>
#include <cstdint>

int32_t func(int32_t x) {
    return 2 * x;  // Just an example, func could be any function
}

int main() {
    int32_t result = 42;  // Assuming 'result' is some computed value

    int32_t doubleResult = func(result);

    std::cout << "The result of doubling the value is: " << doubleResult << std::endl;

    return 0;
}

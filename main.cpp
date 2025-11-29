#include <iostream>
#include <memory>

int main() {

    // Unique pointers

    // A unique pointer is a pointer that owns the piece of memory it points to.
    // The good thing with unique pointers are that they are automatically deleted after used
    // We can't have two unique pointers pointing to the same memory location

    std::unique_ptr<int> x(new int);

    // Easier way
    std::unique_ptr<int> y = std::make_unique<int>();

    // We can use the auto keyword and the compiler can automatically infer what type it is
    auto z = std::make_unique<int>();

    auto v = std::make_unique<int>();

    auto numbers = std::make_unique<int[]>(19);

    numbers[0] = 10;
    std::cout << numbers[0];

    // std::cout << x;
    return 0;
}


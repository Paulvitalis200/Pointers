#include <iostream>
#include <memory>

int main() {

    // Shared pointers

    // We can have two pointers pointing to the same location

    // std::shared_ptr<int> x(new int);

    // std::shared_ptr<int> y = std::make_shared<int>();

    auto x = std::make_shared<int>();

    *x = 10;

    std::shared_ptr<int> y(x); // initialize pointer with x to explain the shared pointer logic

    if (x == y)
        std::cout << "Equal";

    return 0;
}


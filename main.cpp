#include <iostream>


int main() {
    int x = 10;
    int y = 20;

    int* ptrX = &x;
    int* ptrY = &x;

    if (ptrX != nullptr)
        std::cout << *ptrX;

    // We can compare ptr addresses directly and see if they match or if they point to a nullptr
    // We can also dereference the values and compare them
    return 0;
}
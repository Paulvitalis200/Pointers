#include <iostream>

int main() {
    int number = 10;

    int* ptr = &number;

    *ptr = 20;

    std::cout << *ptr;

    // A pointer is a special variable that points to the address of another variable.

    // Declaring a pointer with a specific type makes it only point to the variables specific
    // type. E.g in this case, the number is an int. The pointer can only be an integer and can
    // only point an integer variable.
    // The pointer has to point to an address. e.g in this case, it points to the address of
    // number. &number

    // If we don't initialize the pointer it will always hold junk/garbage values.
    // Best practice is to initialize it or make it nullptr


    // Dereferencing
    // We dereference using *ptr. We can also change the value there by doing
    // *ptr = 20

    return 0;
}
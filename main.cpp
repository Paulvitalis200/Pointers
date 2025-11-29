#include <iostream>


int main() {

    int numbers[] = {10, 20, 30};

    int* ptr = numbers;


    // Imagine address of the ptr is 100

    ptr++;
    // If ptr is incremented, value will be 104 and not 101. Because an integer has 4 bytes.
    // It will point to the beginning of the item in the second place of the array

    std::cout << *ptr;

    // We should see the second item if we print out *ptr; We can also do (ptr + 1)

    // We can also decrease ptr-- or (ptr - 1)

    // It is always best to use bracket notation ie. ptr[1]

    // We cannot multiply or divide pointers. Only addition and subtraction
    return 0;
}
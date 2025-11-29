#include <iostream>

void printNumbers(int numbers[]) {
    // The compiler will treat the int numbers[] as an integer pointer
    // We cannot pass it to the size function e.g std::size(numbers); numbers is a memory address
    // We also cant loop directly for (int number: numbers)
    numbers[0] = 0;
}


int main() {

    // Relationship between arrays and pointers

    int numbers[] = {10, 20, 30};
    int* ptr = numbers;
    std::cout << *ptr << std::endl;

    // When we cout the numbers array, it will give us an address
    // The address is the location of the first element of the array in memory
    // If we do *numbers, it will give us 10

    // We can create a pointer to the numbers. and if we dereference it, it will give us
    // the first value. e.g *ptr will give us 10.
    // We can also access other elements of the array using bracket notation e.g
    // ptr[1]  will give us 2

    // Function parameters that are arrays are passed by reference for EFFICIENCY
    // We don't want to copy everything

    printNumbers(numbers);

    std::cout << numbers[0];
    return 0;
}
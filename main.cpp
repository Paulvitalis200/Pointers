#include <iostream>


int main() {
    // Dynamic memory allocation

    // We can declare an array and set it to have e.g 10 items
    // However, its fixed and if it grows, What to do?
    // Also if we receive only 1 item in the array. That is wasted memory
    // This is where dynamic memory allocation comes in

    // Saved in stack memory
    // int numbers[10];

    // Heap (Free store) - Stored here, We are responsible for the cleanup.
    int* numbers = new int[10]; // Initialize an initial size
    int* number = new int; // Technically we never want to do this. But we';; see later
    delete number;
    delete[] numbers; // Deallocate the memory
    number = nullptr;
    numbers = nullptr; // Not mandatory but good practice


    return 0;
}
#include <iostream>


int main() {
    // Dynamic resizing an array

    int capacity = 5;
    int* numbers = new int[capacity];
    int entries = 0;

    while (true) {
        std::cout << "Number: ";
        std::cin >> numbers[entries];

        if (std::cin.fail()) break;
        entries++;

        if (entries == capacity) {
            capacity = capacity * 2;
            // Create a temp array (twice the size)
            int* tempNumbers = new int[capacity];
            // Copy all the elements
            for (int i = 0; i < entries; i++)
                tempNumbers[i] = numbers[i];
            // Have "numbers" pointer point to the new array
            delete[] numbers; // delete initial memory before
            numbers = tempNumbers;
        }
    }

    for (int i = 0; i < entries; i++)
        std::cout << numbers[i] << std::endl;

    delete[] numbers;

    return 0;
}

// WE NEVER HAVE TO DO THIS. We have smart pointers
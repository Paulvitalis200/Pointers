#include <iostream>


void increasePrice(double* price) {
    *price *= 2;
}

int main() {

    // Passing pointers to functions

    // Modern way of passing large stuff to functions is using references
    // We can also solve this using pointers though. It will have a little
    // more work though

    // We pass the address as the parameters to the increasePrice function
    // We then declare the pointer as the required parameter using double* price
    // Lastly we dereference the pointer to get the value of the price. *price *= 2

    double price = 100;
    increasePrice(&price);
    std::cout << price;

    return 0;
}
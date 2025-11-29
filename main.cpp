#include <iostream>

int main() {

    // Pointers & Constants

    // CASE 1: Data is constant
    const int x = 10;
    const int* ptr = &x;

    int y = 20;
    ptr = &y;


    // If x is a constant, our pointer should also be a const int pointer e.g const int x; const int* ptr
    // We cannot set the value of the *ptr to another value.
    // We can however point the pointer to the address of another variable e.g y. Our pointer is not constant

    // CASE 2: Pointer is constant
    int w = 10;
    int* const newptr = &w;

    // To define a constant pointer, we add const after the pointer type declaration
    // e.g int* const newptr = &w;

    int q = 30;
    newptr = &q; // This won't work because our pointer is constant

    // When declaring a constant pointer, we should always initialize it. If we don't, later on we cannot
    // change the variable


    // CASE 3: Both data and pointer are constant
    const int a = 20;
    const int* const bptr = &a;

    // We have a constant integer, pointing to a constant pointer

    return 0;
}
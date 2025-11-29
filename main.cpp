#include <iostream>


int main() {

    int* x = new int;
    delete x;
    delete x;

     // If we delete pointers twice. We'll get an error. This is why we have smart pointers
    // to free us from the hassle. Managing pointers can be hard

    return 0;
}


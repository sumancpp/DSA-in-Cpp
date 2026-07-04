#include <iostream>
using namespace std;

int main() {

    // int a;
    // cout<< &a <<endl;

    int a;

    // Declare a pointer variable named 'ptr' and initialize it with the memory address of 'a'
    // The '*' signifies that 'ptr' is a pointer, and '&' is the address-of operator.
    int* ptr = &a;

    // Print the memory address where the variable 'a' is stored
    cout << &a << endl;

    // Print the value stored in 'ptr', which is also the memory address of 'a'
    cout << ptr << endl;

    // Print the memory address of the pointer variable 'ptr' itself
    cout << &ptr << endl;

    return 0;
}

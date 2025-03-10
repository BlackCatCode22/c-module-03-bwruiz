#include <iostream>
using namespace std;

int main() {
    int a = 10; // Declare an integer variable a and initialize it
    int *p = nullptr; // Declare a pointer p to an integer and initialize it to nullptr

    p = &a; // Assign the address of a to p

    cout << "Address stored in p: " << p << endl; // Print the address stored in p
    cout << "Value of a using p: " << *p << endl; // Print the value of a using p (dereferencing p)

    *p = 20; // Change the value of a using p (dereferencing p and assigning a new value)

    cout << "New value of a: " << a << endl; // Print the new value of a
    return 0;
}
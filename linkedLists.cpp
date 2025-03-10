#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Declare and initialize an integer array

    // Print the address of each element using pointer arithmetic
    cout << "Addresses of array elements:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "arr[" << i << "]: " << &arr[i] << endl;
    }

    // Traverse the array using a pointer and print each value
    int* ptr = arr; // Initialize a pointer to the first element of the array
    cout << "\nValues of array elements using pointer:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "arr[" << i << "]: " << *ptr << endl;
        ptr++; // Increment the pointer to the next element
    }

    return 0;
}
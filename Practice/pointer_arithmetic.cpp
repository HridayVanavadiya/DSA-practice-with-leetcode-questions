#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    cout << ptr << endl; // prints the address of a
    ptr = ptr + 2; // increments the pointer to point to the address of a + 2 * sizeof(int)
    cout << ptr << endl; // prints the new address

    int b = 20;
    int* ptr2 = &b;
    
    cout << ptr2 << endl; // prints the address of b
    ptr2--; // decrements the pointer to point to the address of b - 1 * sizeof(int)
    cout << ptr2 << endl << endl; // prints the new address


    int arr[5] = {1, 2, 3, 4, 5};
    cout << *arr << endl; // prints the value of the first element of the array
    cout << *(arr + 1) << endl; // prints the value of the second element of the array
    cout << *(arr + 2) << endl; // prints the value of the third element of the array
    cout << *(arr + 3) << endl; // prints the value of the fourth element of the array
    cout << *(arr + 4) << endl << endl; // prints the value of the fifth element of the array


    int* ptr3;
    int* ptr4 = ptr3 + 2; // ptr4 points to the address of ptr3 + 2 * sizeof(int)

    cout << ptr4 - ptr3 << endl; // prints the difference between the two pointers, which is 2
    cout << (ptr4 > ptr3) << endl; // prints 1 if ptr4 is greater than ptr3, otherwise prints 0
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a; // Pointer to integer a
    int** ptrToPtr = &ptr; // Pointer to pointer
    int** ptr2 = NULL; // Pointer to pointer initialized to NULL

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl << endl;

    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl << endl;

    cout << "Value of ptrToPtr: " << ptrToPtr << endl;
    cout << "Value pointed by ptrToPtr: " << *ptrToPtr << endl << endl;

    cout << "Value of ptr2: " << ptr2 << endl;
    return 0;
}
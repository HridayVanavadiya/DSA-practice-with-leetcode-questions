#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << arr << endl; // Prints the address of the first element of the array
    cout << *arr << endl; // Prints the value of the first element of the array

    // arr pointers are constant, so we cannot change the address they point to
}
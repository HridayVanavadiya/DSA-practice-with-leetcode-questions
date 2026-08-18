#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the size ";
    cin >>  n;

    int size = n;
    int nums[size];

    for (int i=0; i<size; i++) {
        cin >> nums[i];
    }

    for (int i=0; i<size; i++) {
        cout << nums[i] << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int decToBinary() {
    int ans = 0, pow = 1;
    int decNum;
    cout << "enter a decimal number ";
    cin >> decNum;

    while(decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    cout << ans << endl;
    return 0;
}

int binaryToDec() {
    int ans = 0, pow = 1;
    int biNum;
    cout << "enter a binary number ";
    cin >> biNum;

    while(biNum > 0) {
        int rem = biNum % 10;
        ans += rem * pow;

        biNum /= 10;
        pow *= 2;
    }
    cout << ans << endl;
    return 0;
}

int main() {
    decToBinary();
    binaryToDec();
}
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "enter the no of stars: ";
    cin >> x;

    int m;
    cout << "enter the no of lines: ";
    cin >> m;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < x; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
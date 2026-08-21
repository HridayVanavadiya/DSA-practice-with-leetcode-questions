#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int mergeSort(vector<int>& a, vector<int> b, int m, int n) {
    int idx = m+n-1, i = m-1, j = n-1;
    while(i >= 0 && j >= 0) {
        if(a[i] >= b[j]) {
            a[idx] = a[i];
            idx--;
            i--;
        } else {
            a[idx] = b[j];
            idx--;
            j--;
        }
    }
    while (j >=0) {
        a[idx] = b[j];
        idx--;
        j--;
    }
}

void printArray(vector<int> a, int m, int n) {
    cout << "the sorted array is ";
    for(int i = 0; i < m+n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}


int main() {
    int m = 3;
    vector<int> a = {1, 2, 3, 0, 0, 0};
    int n = 3;
    vector<int> b = {2, 5, 6};

    mergeSort(a, b, m, n);
    printArray(a, m, n);
}
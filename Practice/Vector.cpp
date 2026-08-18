#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec; //empty vector

    vec.push_back(0); //to push element in the vector
    vec.push_back(1);
    vec.push_back(2);

    cout << "size of the vector before more push is " << vec.size() << endl;
    cout << "capacity of the vector before more push is " << vec.capacity() << endl;

    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.pop_back(); //pop the last element(5)

    cout << "capacity of the vector after more push is " << vec.capacity() << endl;

    for (int val : vec){ //for each loop generally for STL containers 
        cout << val <<endl;
    }
    
}
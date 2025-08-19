// Accept 5 values and print them later on.
#include<iostream>
using namespace std;
int main() {
    int A[5];
    cout<< "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> A[i]; 
    }
    cout << "You have entered: ";
    for(int i = 0; i < 5; i++) {
        cout << A[i] << (i < 4 ? ' ':'\n');
    }
    return 0;
}
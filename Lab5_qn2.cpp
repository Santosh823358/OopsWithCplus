// Accept 10 values and print 4th, 7th and 9th value
#include<iostream>
using namespace std;
int main() {
    int A[10];
    cout<<"Enter 10 integers:\n";
    for (int i = 1; i <= 10; i++){
    cin >> A[i];
    }
        cout<< "4th value: "<<A[4] << endl;
        cout<< "7th value: "<<A[7] << endl;
        cout<< "9th value: "<<A[9] << endl;
    
    return 0;
}
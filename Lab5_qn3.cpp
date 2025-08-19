// Accept 5 values and arrange them in ascending / descending order.
#include <iostream>
using namespace std;

int main() {
    int a[5], i, j, temp;
    cout << "Enter 5 numbers: ";
    for(i = 0; i < 5; i++) {
        cin >> a[i];
    }

    for(i = 0; i < 5; i++) {
        for(j = i+1; j < 5; j++) {
            if(a[i] > a[j]) {   
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
 
    cout << "\nAscending Order: ";
    for(i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

     
    cout << "\nDescending Order: ";
    for(i = 4; i >= 0; i--) {
        cout << a[i] << " ";
    }

    return 0;
}

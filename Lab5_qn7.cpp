// Print month no. of a given month name e.g. April-4.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string months[12] = {"January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November", "December"};

    string name;
    cout << "Enter month name: ";
    cin >> name;

    int monthNo = -1;

    for (int i = 0; i < 12; i++) {
        if (months[i] == name) {
            monthNo = i + 1; // array starts from 0, so +1
            break;
        }
    }

    if (monthNo != -1)
        cout << name << " = " << monthNo << endl;
    else
        cout << "Invalid month name!" << endl;

    return 0;
}

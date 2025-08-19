// Print month name of a given month no. (e.g., 3 = March).
#include <iostream>
using namespace std;

int main() {
    int monthNo;
    cout << "Enter month number (1-12): ";
    cin >> monthNo;
    string months[12] = {"January", "February", "March", "April",
                         "May", "June", "July", "August",
                         "September", "October", "November", "December"};

    if(monthNo >= 1 && monthNo <= 12) {
        cout << "Month: " << months[monthNo - 1];
    } else {
        cout << "Invalid month number!";
    }

    return 0;
}

// Print minimum number of concurrency notes required(1,2,5,10,20,50,100)
#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    int notes[] = {100, 50, 20, 10, 5, 2, 1};  
    int count[7] = {0};

    for (int i = 0; i < 7; i++) {
        if (amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount = amount % notes[i];
        }
    }

    cout << "Minimum notes required:\n";
    for (int i = 0; i < 7; i++) {
        if (count[i] != 0) {
            cout << notes[i] << " : " << count[i] << endl;
        }
    }

    return 0;
}

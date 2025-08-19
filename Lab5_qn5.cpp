// Convert figures into words (e.g., 99 = nine nine). Assume number to be between 0 and 1000.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (0 - 1000): ";
    cin >> num;

    if(num < 0 || num > 1000) {
        cout << "Invalid input! Enter between 0 and 1000.";
        return 0;
    }

    string words[] = {"zero", "one", "two", "three", "four",
                      "five", "six", "seven", "eight", "nine"};

    if(num == 0) {
        cout << "zero";
        return 0;
    }

    int digits[10], count = 0;

    while(num > 0) {
        digits[count] = num % 10;
        num /= 10;
        count++;
    }

    for(int i = count - 1; i >= 0; i--) {
        cout << words[digits[i]] << " ";
    }

    return 0;
}

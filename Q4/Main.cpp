/* Write a program that inputs a series of integers and passes them one at a time to
function isEven, which uses the modulus operator to determine whether an integer
is even. The function should take an integer argument and return true if the integer
is even and false otherwise. */

#include <iostream>
#include <conio.h> // For _getch()
#include <cctype>  // For isdigit()
#include <string> // for std::stoi

using namespace std;

// Function to check if a number is even
bool isEven(int number) {
    return (number % 2 == 0);
}

int main() {
    cout << "=== Even Number Checker ===\n";
    cout << "Press ESC at any time to quit.\n\n";

    while (true) {
        string input;
        char ch;

        cout << "Enter an integer: ";

        // Read characters one by one
        input.clear();
        while (true) {
            ch = _getch();

            // Quit if ESC pressed
            if (ch == 27) {
                cout << "\nExiting program...\n";
                return 0;
            }

            // If Enter is pressed, stop reading this number
            if (ch == '\r') {
                cout << endl;
                break;
            }

            // Only accept digits and optional minus sign
            if (isdigit(ch) || (ch == '-' && input.empty())) {
                cout << ch; // Echo to screen
                input.push_back(ch);
            }
        }

        // Convert input to integer
        if (!input.empty()) {
            int number = stoi(input);
            if (isEven(number)) {
                cout << number << " is even.\n";
            }
            else {
                cout << number << " is odd.\n";
            }
        }
    }

    return 0;
}

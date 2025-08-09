/* Function floor can be used to round a number to a specific decimal place. The
statement y = floor(x * 10 + 0.5) / 10; rounds x to the tenths position (the
first position to the right of the decimal point). The statement y = floor(x * 100
+ 0.5) / 100; rounds x to the hundredths position (the second position to the
right of the decimal point). Write a program that defines four functions to round a
number x in various ways:
a. roundToInteger(number)
b. roundToTenths(number)
c. roundToHundredths(number)
d. roundToThousandths(number)

For each value read, your program should print the original value, the number
rounded to the nearest integer, the number rounded to the nearest tenth, the
number rounded to the nearest hundredth and the number rounded to the nearest
thousandth. */

#include <iostream>
#include <iomanip>
#include <cmath>    // for floor()
#include <conio.h>  // for _getch()

using namespace std;

// Function to round to the nearest integer
double roundToInteger(double number) {
    return floor(number + 0.5);
}

// Function to round to the nearest tenth
double roundToTenths(double number) {
    return floor(number * 10 + 0.5) / 10;
}

// Function to round to the nearest hundredth
double roundToHundredths(double number) {
    return floor(number * 100 + 0.5) / 100;
}

// Function to round to the nearest thousandth
double roundToThousandths(double number) {
    return floor(number * 1000 + 0.5) / 1000;
}

int main() {
    double number;
    char key;

    cout << fixed << setprecision(4); // Format decimals to 4 digits
    cout << "=== Rounding Numbers Program ===\n";
    cout << "Press ESC at any time to quit.\n\n";

    while (true) {
        cout << "Enter a number to round: ";
        cin >> number;

        cout << "Original number: " << number << endl;
        cout << "Rounded to nearest integer: " << roundToInteger(number) << endl;
        cout << "Rounded to nearest tenth: " << roundToTenths(number) << endl;
        cout << "Rounded to nearest hundredth: " << roundToHundredths(number) << endl;
        cout << "Rounded to nearest thousandth: " << roundToThousandths(number) << endl;

        cout << "\nPress ESC to quit or any other key to enter another number...";
        key = _getch(); // Read key press without waiting for Enter

        if (key == 27) { // 27 = ASCII Escape key
            cout << "\nExiting program...\n";
            break;
        }
        cout << "\n\n";
    }

    return 0;
}
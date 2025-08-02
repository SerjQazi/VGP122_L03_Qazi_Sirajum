/* A parking garage charges a $20.00 minimum fee to park for up to three hours. The
garage charges an additional $5.00 per hour for each hour or part thereof in excess
of three hours. The maximum charge for any given 24-hour period is $50.00. Assume
that no car parks for longer than 24 hours at a time.
Write a program that calculates and prints the parking charges for each of three
customers who parked their cars in this garage yesterday. You should enter the
hours parked for each customer. Your program should print the results in a neat
tabular format and should calculate and print the total of yesterday’s receipts. The
program should use the function calculateCharges to determine the charge for each
customer. Your outputs should appear in the following format: 

Car		Hours		Charge
1		1.5			20.0
2		4.0			25.0
3		24.0		50.0
Total	29.5		95.50
*/

#include <iostream>
#include <iomanip>
#include <cmath> // for ceil()

using namespace std;

// Function to calculate the parking charge based on hours parked
double calculateCharges(double hours) {
    const double MINIMUM_CHARGE = 20.00;
    const double ADDITIONAL_CHARGE_PER_HOUR = 5.00;
    const double MAXIMUM_CHARGE = 50.00;

    // If 3 hours or less, charge the minimum
    if (hours <= 3.0) {
        return MINIMUM_CHARGE;
    }

    // Calculate extra hours beyond the first 3 (round up partial hours)
    double extraHours = ceil(hours - 3.0);
    double charge = MINIMUM_CHARGE + (extraHours * ADDITIONAL_CHARGE_PER_HOUR);

    // Cap the charge at the maximum
    return (charge > MAXIMUM_CHARGE) ? MAXIMUM_CHARGE : charge;
}

int main() {
    const int NUM_CUSTOMERS = 3;
    double hours[NUM_CUSTOMERS];    // Store hours for each car
    double charges[NUM_CUSTOMERS];  // Store charges for each car
    double totalHours = 0.0;
    double totalCharges = 0.0;

    cout << fixed << setprecision(2); // Format decimals to 2 digits
    cout << "=== Parking Garage Billing ===\n";
    cout << "Enter the hours parked for each customer:\n";

    // Input: Get hours for each customer
    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        cout << "Customer " << (i + 1) << " hours: ";
        cin >> hours[i];

        charges[i] = calculateCharges(hours[i]);

        // Keep running totals
        totalHours += hours[i];
        totalCharges += charges[i];
    }

    // Output table header
    cout << "\n---------------------------------\n";
    cout << "Car\tHours\tCharge\n";
    cout << "---------------------------------\n";

    // Output data for each customer
    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        cout << (i + 1) << "\t" << hours[i] << "\t" << charges[i] << endl;
    }

    // Output totals
    cout << "---------------------------------\n";
    cout << "Total\t" << totalHours << "\t" << totalCharges << endl;

    return 0;
}



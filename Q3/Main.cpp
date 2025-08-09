/* Define a function hypotenuse that calculates the hypotenuse of a right triangle
when the other two sides are given. The function should take two double arguments
and return the hypotenuse as a double. Use this function in a program to determine
the hypotenuse for each of the triangles shown below. 

Triangle	Side 1		Side 2
1			3.0			4.0
2			5.0			12.0
3			8.0			15.0 */

#include <iostream>
#include <cmath> // for sqrt()
#include <iomanip> // for setprecision

using namespace std;

// Function to calculate the hypotenuse of a right triangle
double hypotenuse(double side1, double side2) {
	return sqrt(side1 * side1 + side2 * side2);
}

int main() {
	double side1, side2;
	cout << fixed << setprecision(2); // Set precision for output
	cout << "=== Hypotenuse Calculator ===\n";
	// Triangle 1
	side1 = 3.0;
	side2 = 4.0;
	cout << "Triangle 1: Side 1 = " << side1 << ", Side 2 = " << side2
		<< ", Hypotenuse = " << hypotenuse(side1, side2) << endl;
	// Triangle 2
	side1 = 5.0;
	side2 = 12.0;
	cout << "Triangle 2: Side 1 = " << side1 << ", Side 2 = " << side2
		<< ", Hypotenuse = " << hypotenuse(side1, side2) << endl;
	// Triangle 3
	side1 = 8.0;
	side2 = 15.0;
	cout << "Triangle 3: Side 1 = " << side1 << ", Side 2 = " << side2
		<< ", Hypotenuse = " << hypotenuse(side1, side2) << endl;
	return 0;
}
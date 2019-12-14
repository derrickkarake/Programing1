// Lab 1 -- circle
// Derrick karake
// This program prompts the user for the radius and then calculates the area of circle and dispays it on the screen
#include <iostream>
using namespace std;
int main()
{
	double PI = 3.14159;
	double area, radius;
	cout << "Please enter the radius of the circle: ";
	cin >> radius;
	area = PI * radius * radius;
	cout << "A circle with radius " << radius << " has "
		<< "area: " << area << endl;
	// for our programs, the last statement of "main" will
	// always be as shown below
	return 0;
}



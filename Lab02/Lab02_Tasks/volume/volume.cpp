// this program calcualtes the volume of a cylinder 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float volume, radius, height; //holds the specifation of the cylinder
	float const PI = 3.14159; 
		cout << "This program will tell you the volume of\n";
		cout << "a cylinder-shaped fuel tank.\n";
		cout << "How tall is the tank? ";
		cin >> height;
		cout << "What is the radius of the tank? ";
		cin >> radius;
		volume = PI * (pow(radius,2))* height; // calculates volume by multiplying pi radius twice and hieght
		cout << " The volume of your cylinder is " << volume << endl; 
	return 0;
}
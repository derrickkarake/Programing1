
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int temp_celsius, temp_fahrenheit; //hold the degrees in celsius and fahrenheit
	cout << "This program converts Celsius temperatures to Fahrenheit";
	cout << "Please enter the temperature in Celsius"<< endl;
	cin >> temp_celsius;
	temp_fahrenheit = static_cast<double>((1.8)*temp_celsius+32); // calculates volume by multiplying pi radius twice and hieght
	cout << temp_celsius << " degrees celsius is " <<temp_fahrenheit <<" in fahrenheit"<< endl;
	return 0;
}

//result = static_cast<double>(integer1) / integer2;	
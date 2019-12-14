#include <iostream>
using namespace std;


int main()
{
	// list the variables
	int x = 0;
	int y = 0;
	int x2 = 0;
	int y2 = 0;
	float slope = 0;
	// Gather the informartion 
	cout << "Please carefully enter the value of X " << endl;
	cin >> x;
	cout << "Please enter the value of y " << endl;
	cin >> y;
	cout << "Please enter the values of X2 " << endl;
	cin >> x2;
	cout << "Please enter the values of y2 " << endl;
	cin >> y2;
	// The formolar 
	slope = (y2 - y) / (x2 - x);

	cout << setprecision(2) << slope;
	// List the condition 
	{
		if (x == x2)
		{
			cout << "The line is vertical and undefined. " << endl;
		}

		else
		{
			cout << slope << endl;
		}
	}

	return 0;
}
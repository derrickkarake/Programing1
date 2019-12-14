#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// THis program calculates the Interest earned
// List the variables
// collect Information from the users
 //calculate and display the interest accordingly

int main()
{
	// listing the variable
	float rate = 0.0;
	float principle = 0.0;
	int timescompounded = 0.0;
	float interest = 0.0;
	float amountinsavings = 0.0;


	cout << "WHat is the current amount in your bank account? " << endl;
	cin >> principle;
	cout << "What is your bank's interest rate? " << endl;
	cin >> rate;
	cout << "How many times is the interest compunded? " << endl;
	cin >> timescompounded;


	interest = principle * rate;
	amountinsavings = principle*(pow(1+rate/timescompounded,2));

	cout << "Intrest rates     " << "    " << setw(10) << setprecision(2) <<rate <<"%" << endl;
	cout << "Times compounded  " << "    " << setw(10) << setprecision(2) << timescompounded << endl;
	cout << "Principle         " << "    " << setw(10) << setprecision(2) << principle << endl;
	cout << "Interest          " << "    " << setw(10) << setprecision(2) << interest << endl;
	cout << "Amount in savings " << "    " << setw(10) << setprecision(2) << amountinsavings << endl;


	return 0;
}
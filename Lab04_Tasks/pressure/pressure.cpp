#include <iostream>
using namespace std;
#include <iomanip>; 

int main()
{
	int first_number, second_number, third_number;                                  //holds inputs


	cout << "Please enter three numbers" << endl;
	cin >> first_number >> second_number >> third_number;

	double average = (first_number + second_number + third_number) / 3;               // holds the average of the three numbers

	cout << "your average is" << setprecision(3) << fixed << average << endl;

	if (average < 39)
	{
		cout << "The pressure is low low" << endl;
	}
	else if(average < 70)
	{
		cout << " The pressure is normal" << endl; 
	}
	else if (average < 100)
	{
		cout << " The pressure is high" << endl;

	}
	
	return 0;
}
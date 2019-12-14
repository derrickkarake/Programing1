#include <iostream>
using namespace std;


int main()
{
	// list the variable 
	double numberofcalories = .0;
	double fatingrams = 0;
	double caloriesfromfat = 0;
	double perecentagecalories = 0;
	// gather information from the user 
	cout << "Please enter the number of calories" << endl;
	cin >> numberofcalories;
	cout << "Please enter the fat in grams" << endl;
	cin >> fatingrams;


	if (numberofcalories < 0 || fatingrams < 0)
		cout << " Invalid, calories or fat can not be equal to 0, please restart the program. " << endl;
	else
		if (numberofcalories < fatingrams)
			cout << " Invalid the calories in fat cannot be less than the total nimber of calories." << endl;


	// list the restrictions

			// list the formalars.
	caloriesfromfat = fatingrams * 9.0;
	// calculate the percentage
	perecentagecalories = caloriesfromfat / numberofcalories;
	// if statements 

	if (perecentagecalories < 0.03)
		cout << " The food is low in fat." << endl;
	else
		cout << perecentagecalories << "%" << endl;





	return 0;
}
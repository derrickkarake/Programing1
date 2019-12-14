#include <iostream>
using namespace std;


int main()
{
	int score;		// numeric test score

	cout << "Enter your score: ";
	cin >> score;
	if (score < 0 || score > 100)
	{
		cout << " The socre is invalid " << endl;
	}
	else if (score >= 90) {
		cout << "You made an A" << endl;
	}

	else if (score >= 80) {
		cout << "You made  B" << endl;
	}
	else if (score >= 70) {
		cout << "You made a c" << endl;
	}
	else if (score >= 60) {
		cout << "You made a c" << endl;
	}
	else {
		cout << "You made an F" << endl;
	}


	return 0;
}
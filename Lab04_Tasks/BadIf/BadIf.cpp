// Bad if
#include <iostream>
using namespace std;

int main()
{

	int score;

	cout << "Enter your test score: ";
	cin >> score;
	{
		if (score >= 60) {
			cout << "The score " << score << " is passing." << endl;
		}
		else {
			cout << "The score " << score << " is failing. " << endl;
		}
	}



	return 0;
}
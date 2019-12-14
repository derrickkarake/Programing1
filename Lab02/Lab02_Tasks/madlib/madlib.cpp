#include <iostream>
#include <string>
using namespace std;
// This program tells a stroy using the users information 
// gather information
// write out the story using the users information

int main()
{
	// List variables 
	string name = "";
	int age = 0;
	string city = "";
	string college = "";
	string profession = " ";
	string typeofanimal = "";
	string petname = "";
	// gather users information

	cout << "What is your name ?" << endl;
	cin >> name;
	cout << "How old are you ?" << endl;
	cin >> age;
	cin.ignore();
	cout << " What city do you come from ? " << endl;
	getline(cin, city);
	cout << " What college do you go to ?" << endl;
	getline(cin, college);
	cout << " What is your profession ?" << endl;
	getline(cin, profession);
	cout << " What type of animal do you have ? " << endl;
	cin >> typeofanimal;
	cout << "What is the name of your pet ?" << endl;
	cin >> petname;

	// write out the story using the users information

	cout << "There was a person named " << name << " who live in " << city << "." << " At the age of " << endl << age << "," << name <<
		"Went to college at " << college << "." << name << "graduated and went to work as a " << profession << "." << endl << "Then " << name << " adopted a "
		<< typeofanimal << " named " << petname << "." << endl << "They both lived happily ever after !" << endl;

	cout << " Thank you for using Derrick's program!!!!" << endl;



	return 0;
}
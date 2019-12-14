// This program reads data from a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	int number; int counter; int negcounter; int average; int largest; int smallest; int sum; int range;
	ifstream inputFile;
	

	// Open the file.
	inputFile.open("TextFile1.txt");

	// Read the numbers from the file and
	// display them.
	if (inputFile)
	{
		while (inputFile >> number)
		{
			counter++;
			sum += number;

			if (number > largest)
			{
				largest = number;

			}
			else if (number < smallest)
			{
				smallest = number;
			}
			else if (number < 0)
			{
				negcounter++;
			}

		}

		average = sum / counter;
		range = largest - smallest;

		cout << " The range is " << range;
		cout << "\n The averange is " << average << endl;
		cout << " There were negatives =" << negcounter;
	}
	else
	{
		cout << " error opening file" << endl; 
	}

	// Close the file.
	inputFile.close();
	return 0;
}


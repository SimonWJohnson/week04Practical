// week04Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
	Write an application that prompts the user for a set of numbers (integers) and stores them in a std::set. 
	You may ask the user for the number of values that they will enter or use some other means to end the set of numbers.
*/

#include <iostream>
#include <set>
#include <map>
#include <string>
#include <limits>

using namespace std;

// Helper functions

// Function to safely read an integer
int getValidInt(const string& prompt) {
	int value;

	// While loop to continue prompts until valid input received
	while (true) {
		cout << prompt;
		cin >> value;

		// Validate user input
		if (cin.fail()) {
			// Error message
			cout << "Invalid input...Please enter an integer\n";
			// Clear input cache
			cin.clear();
			// 
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return value;
		}

	}
};


// Function to safely read an string
string getValidString() {

};

int main()
{
	
}


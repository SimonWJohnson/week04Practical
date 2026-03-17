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
			// Clear input cache / discard bad input
			cin.clear();
			// clear any leftover input
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return value;
		}

	}
};


// Function to safely read an string
string getValidString(const string& prompt) {
	string value;
	cout << prompt;
	getline(cin, value);
	return value;
};

int main()
{
	// declare and initialise variables
	// cast the type
	// create a set to contain integers added by the user
	set<int>numbers;

	// cast type for key-value pair
	// create a map to associate integers (keys) with strings (values)
	map<int, string>numberMap;

	// Step 3 
	// Prompt the user for an input
	int count = getValidInt("How many integers would you like to store? : ");

	// loop to collect integers and store them in the set
	for (int i = 0; i < count; i++) {
		int num = getValidInt("Enter integer # " + to_string(i + 1) + ": ");
		// insert value into the set
		numbers.insert(num);
	}

	// Step 4: Prompt the user for another number, check if the number is in the original set, 
	// and display a message to the user indicating whether the number was present in the set.

}


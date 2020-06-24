//Christos Kokkalis 2020 - main program

#include <iostream>
#include "phone.h"

using namespace std;

int main()
{
	//creating the object
	PhoneNumber phone;

	//reading phone number input from user
	cout << "Please enter a phone number (in the form of 012-345-6789): ";
	cin >> phone;

	//printing the phone number to console
	cout << "\n\nThe phone number you entered was: " << phone;

	cout << "\n\n And the area code is: " << phone.getAreaCode() << "\n";
	return 0;
}
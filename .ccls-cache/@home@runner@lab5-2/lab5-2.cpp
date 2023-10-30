//******************************************************************************
// PROJECT: Lab 5 Part 2
// FILE: lab5-2.cpp
//
// DESCR: This program displays a prompt asking the user to enter their
// grade average (a double). If the average is greater than 60 then
// the program outputs "You Pass" followed by a newline. Otherwise,
// if average is less than 60, the program outputs "You Fail" followed
// by a newline.
//
// AUTHOR: Austin Jones <akjone29@asu.edu>
// DATE: Oct 29, 2023
//******************************************************************************
#include <iostream>
using namespace std;
int main()
{
float average; // average could alternatively be defined as a double
// Display the prompt to ask the user to enter their average.
cout << "Input your average:" << endl;
// Read the average from the keyboard and stick the value into variable
// average.
cin >> average;
// Check if the average is greater than 60. If so, then output "You Pass"
// followed by a newline.
if (average >100 || average <0)
cout << "Invalid data." << endl;
// First statement 
else if (average >= 90) // else if statement for average 90 or above
cout << "You get an A!" << endl;
	// Second statement
else if (average >= 80)
	cout << "You get a B." << endl;
	// Third statement
else if (average >= 60)
	cout << "You pass" << endl;
	// Fourth statement
else if (average < 60)
	cout << "You fail" << endl;
	// Last statement
return 0;
}
// End of program
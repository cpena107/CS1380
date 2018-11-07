// Libraries to get cout, cin
#include <iostream>
// Libraries to get strings
#include <string>
#include<stdlib.h>

using namespace std;

int main()
{
	srand(3064);
	
	// Exercise 1

	// declare a variable to hold a character and initialize it
	// to the letter ‘U’
	// variable type, variable name, assignment "=" will equal the variable to 'U'
	char			someCharacter = 'U';

	// print "The value of the variable is <variable>"
	// cout means console out and it prints anything after <<
	// use as many << as you need
	cout << "The value of the variable is " << someCharacter << endl;

	// prompt the user to enter a value
	// instruct the user to enter a variable type (in this case character)
	cout << "Enter a character: " << endl;

	// store whatever character the user types in your variable
	// take the user input and save it in the variable (someCharacter)
	cin >> someCharacter;

	// if the user typed ‘E’ print "Excellent. "
	// the if needs a statement inside the ( ) so it run the code in the body
	// or operator ||
	// truth of the or
	// true true = true
	// true false = true
	// false true = true
	// false false = false
	if (someCharacter == 'E' || someCharacter == 'e') {
		//body
		cout << "Excellent" << endl;
	}
	// otherwise if the user type 'L' print "Loser"
	// to add the new condition use an else before the if
	// 
	else if (someCharacter == 'L' || someCharacter == 'l') {
		//body
		cout << "Loser" << endl;
	}
	// otherwise print, "No, you fool! "
	// will always run as long as the previous ifs are false
	// default
	else {
		cout << "No, you fool" << endl;
	}
	*/
	/*
	// Exercise 2.1

	int i = 1; // starting value of i is 1
	int counter = 0; // number of times the loop ran
	while (i < 15)
	{
		// i += 3; // same as line below 
		i = i + 3;
		// increment counter by 1 every time the loop runs
		counter = counter + 1;
	}

	// Check is i (1) < 15 = true
	// run loop add 3 to i (i = 4)
	// First loop
	// check if i (4) < 15 = true
	// run loop add 3 to i (i = 7)
	// Second loop
	// check if i (7) < 15 = true
	// run loop add 3 to i (i = 10)
	// Third loop
	// check if i (10) < 15 = true
	// run loop add 3 to i (i = 13)
	// Fourth loop
	// check if i (13) < 15 = true
	// run loop add 3 to i (i = 16)
	// Fifth loop
	// check if i (16) < 15 = false
	// Loop exits

	// The loop ran 5 times and i is 16
	cout << "The loop ran " << counter << " and i is " << i << endl;

	// Exercise 2.2

	int count = 1;
	int y = 10;
	while (count < 10)
	{
		y = y - 1; // -- decrement the variable by 1
		// y--; // same as the line above
		count++; // ++ increments variable by 1
	}
	// check count (1) < 10 = true
	// run loop decrement y by 1 (y = 9)
	// increment our count by 1 (count = 2)
	// First loop
	// check count (2) < 10 = true
	// run loop decrement y by 1 (y = 8)
	// increment count by 1 (count = 3)
	// Second loop
	// .
	// .
	// .
	// 9 loop
	// check count (9) < 10 = true
	// run loop decrement y by 1 (y = 1)
	// increment count by 1 (count = 10)
	// 10 loop
	// check count (10) < 10 = false
	// exit loop

	// explain why y is = something and count = something
	cout << "y = " << y << " and count = " << count << endl;

	// Exercise 2.3
	// Given a double variable n, write C++ statements to ask the user to enter a 
	// real number repeatedly until the user enters a number that is greater than n.
	// Store the user number in a double variable number.

	//declare the number n
	double n = 123.456;
	// declare a variable for the user input
	double number = 0;

	// the while loop is checking that the number from the user is less than n
	while (n > number) {
		// now ask the user to enter a real number 
		cout << "Input any real number: " << endl;

		// save the input into number
		cin >> number;
	}


	cout << "Alright, you got it" << endl;
	*/

	// declare the number n
	// int n = 123;
	int n = rand() % 100 + 1;
	// declare a variable for the user input
	int number = 0;

	// the while loop is checking that the number from the user is less than n
	while (n != number) {
		// now ask the user to enter any integer
		// Binary seach 50 -> too high -> 25
		//					-> too low -> 75
		cout << "Guess my number, input any integer between 1 and 100: " << endl; // 1, 2, 3, 4, ...

		// save the input into number
		cin >> number;

		// check if the number is greater than our secret n
		if (n < number) {
			cout << "Too high" << endl;
		}
		// check is the number is less than our secret n
		else if (n > number) {
			cout << "Too low" << endl;
		}
	}

	// tell the user he/she got the number right
	cout << "You guessed right" << endl;

	system("pause");
	return 0;
}

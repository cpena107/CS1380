#include <iostream>
using namespace std;

int main()
{
	//This is a comment.  The compiler ignores this stuff.
	//You can write anything you want in a comment. 
	//It's a good way to annotate your program, ie describe
	//what's going on in your code using "human" talk

	//cout is how you print stuff to the screen.
	cout << "Bacon is bay?  What is this guy talking about...";
	
	//endl is how you print a carriage return to the screen.
	cout << endl;
	cout << "I don't know..";

	//Now let's "declare" a variable
	//Here is a variable named "num1".
	//You can pick any name for a variable that
	//you want.
	int num1;

	//let's set the value of num1
	num1 = 68;

	//let's print num1's value to the screen.
	cout << "Here is the value of num1: ";
	cout << num1 << endl;

	num1 = 21;

	cout << "We've just changed num1 to: " << num1;

	//Let's do some math
	int num2;
	num2 = 41;

	cout << "Multiplication fact: " << num1 << " times " << num2 << " equals " << num1*num2 << endl;

	//Ok, now for basic input examples
	//We're going to make an age-guessing program!

	//step 1: get the year of player's birth
	cout << "Hi user! Please tell me the year you were born: " << endl;
	//now we read in from the keyboard!
	int birthYear;
	cin >> birthYear;

	//read it back to the user for fun
	cout << "You were born in year " << birthYear << "!?  Your like way too young or something" << endl;

	//compute player's age
	int age;
	age = 2018 - birthYear;

	//tell player how old they are
	cout << "Your age is: " << age << endl;



	return 0;
}

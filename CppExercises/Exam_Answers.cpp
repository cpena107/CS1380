#include <iostream>
#include <string>

using namespace std;

//prototype
string getLetterGrade(double grade);

int main() {

	cout << getLetterGrade(89) << endl; // you output a B
	cout << getLetterGrade(90) << endl; // you output an A
	cout << getLetterGrade(79) << endl; // you output an F

	// 1. Declare int variables x, y, and z. Initialize x to 25, y to 18 and z to 0.

	/*One way
	int x;
	int y;
	int z;
	x = 25;
	y = 18;
	z = 0;
	*/
	/*Another way
	int x = 25;
	int y = 18;
	int z = 0;
	*/
	//int x = 25, y = 18, z = 0;

	// 2. Update x by adding 5, y by subtracting 7, and multiply x and y and store in z
	//x = x + 5;
	//x += 5;
	// x = 25 + 5; // half correct
	//y = y - 7;
	//y -= 7;
	//z = x * y;


	// Question 3: what is the output?

	int myNum = 10;
	int yourNum = 30;

	if (yourNum % myNum == 3) // 0 == 3 is false
	{
		yourNum = 3;
		myNum = 1;
	}
	else if (yourNum % myNum == 2) // 0 == 2 is false
	{
		yourNum = 2;
		myNum = 2;
	}
	else // default
	{
		yourNum = 1;
		myNum = 3;
	}

	cout << myNum << " " << yourNum << endl;
	// 3 1

	// Question 4: Wrtie a program that prompts the user to input a number. The program should then output
	//				the number and a message saying whether the number is positive negative or zero

	// define variables
	int userInput; 
	// prompt the user to enter a number
	cout << "User please enter a number: ";
	// get input of the user and store it in your variable
	cin >> userInput;
	// using if else statements determine if the number is positive negative or zero
	if (userInput > 0) { // if (userInput >= 1)
		cout << userInput << " is a positive num" << endl;
	}
	else if (userInput < 0) { // if (userInput <= -1)
		cout << userInput << " is a negative num" << endl;
	}
	else //if (userInput == 0) { 
	{
		cout << userInput << " is a zero" << endl;
	}

	// Question 5: what is the output
	int counter = 1;
	int x = 12;

	while (counter < 12) {
		x = x - 1; 
		counter += 2;
	}
	/* While loop representation
	// x = 12, counter = 1 
	x = x - 1; // 11
	counter += 2; // 3

	x = x - 1; // 10
	counter += 2; // 5

	x = x - 1; // 9
	counter += 2; // 7

	x = x - 1; // 8
	counter += 2; // 9

	x = x - 1; // 7
	counter += 2; // 11

	x = x - 1; // 6
	counter += 2; // 13
	*/
	// x = 12
	// counter = 1
	// Check counter (1) < 12 // true
	// x - 1
	// counter + 2
	// counter = 3
	// x = 11
	// check counter (3) < 12 // true
	// x - 1 = 10
	// counter + 2 = 5
	//.. 9 8 7
	//.. 7 9 11
	// check counter (11) < 12 // true
	// x - 1 = 6
	// counter + 2 = 13

	cout << "x = " << x << " and counter " << counter << endl;
	// x = 6 and counter = 13

	// Question 6: Consider the following for loop
	// loop control variable: j
	// initial declaration: j = 1
	// loop condition:  j <= 10
	// update statement: j++
	// statement that updates the value of s: s = s + j * (j - 1) 

	// for loop needs 3 thing inside the ( )
	// 1st initial declaration
	// 2nd loop condition
	// 3rd update
	int j, s;

	s = 0;
	for (j = 1; j <= 10; j++) {
		s = s + j * (j - 1);
	}




	system("pause");
	return 0;
}

// Extra credit:
// Define function called getLetterGrade that takes in one double variable called grade and returns 
// a letter grade (string); "A" if greater that 89....

// return type: string
	// function name: getLetterGrade
		// parameters: double grade
string getLetterGrade(double grade) {

	if (grade > 89) { // (grade >= 90 && grade <= 100)
		return "A"; // function ends on a return and returns whatever value it had
	}
	else if (grade > 79) { // (grade >= 80 && grade < 90)
		return "B";
	}
	//....

	return "F"; // this is the default like else
	// this only works on functions
}

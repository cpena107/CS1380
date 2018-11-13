// Open VS 2017/15 
// File -> New Project 
// Add Empty Project
// Right click on Source Files -> Add -> New File...
// Add your .cpp file

// include cpp libraries they 3rd party
#include <iostream> // this includes cout, cin
#include <string> // includes the string variable

using namespace std; // easier to use cout and cin
				
int main() {

	// for loop, loops and counts at the same time
	// declare the for loop with the word "for" and complete the parenthesis
	// for( initial declaration; condition; update)
	// initial declaration runs once at the definition of the for loop
	// condition runs every time the loop tries to run
	// update runs after the loop finished a run
	for (int i = 0; i < 10; i++) {
		// body of the for loop
		cout << i << endl;
	}

	// Example while loop
	// Equivalent to the for loop above
	// int counter = 0;
	// while (counter < 10) {
	//	cout << counter << endl;
	//	counter++;
	//}

	int sum = 0;
	// sum all numbers from 0 to 1000
	for (int j = 0; j < 10001; j++) {
		sum += j;
	}
	cout << "The result of our sum is " << sum << endl;

	// we can do the same but in reverse
	sum = 0;
	for (int k = 10000; k > 0; k--) {
		sum += k;
	}
	cout << "The result of our sum is " << sum << endl;

	// Nested loops
	// outter loop runs 10 times
	int counter = 0;
	for (int l = 0; l < 10; l++) {
		// the inner loop runs 100 times
		for (int m = 0; m < 10; m++) {
			counter += 1;
		}
	}

	cout << "The nested loop ran " << counter << endl;

	// 1. *
	// 2. **
	// 3. ***
	// 4. ****
	// 5. *****

	cout << "*" << endl << "**" << endl << "***" << endl << "****" << endl;

	// outer loop defines the number of lines
	for (int i = 1; i <= 20; i++) {
		// start k at line 0 an run for as many times as i has
		// inner loop defines the number of stars
		// keep writting stars until the end of the inner loop
		for (int k = 0; k < i; k++) {
			cout << "*";
		}

		// end line
		cout << endl;
	}

	system("pause"); 
	return 0; // the code exited without any errors

}
#include <iostream>
#include <string>

using namespace std;

int main() {

	// for loops: they loop and count at the same time
	// call the for loop with the keyword "for"
	// inside the (initial declaration; condition; update )
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	// Equivalent while loop from above
	// int counter = 0;
	// while (counter < 10) {
	// 	cout << counter << endl;
	// 	counter += 1;
	// }

	int sum = 0;
	// lets sum the numbers from 1 to 10000
	for (int j = 0; j < 1001; j++) {
		sum += j;
	}
	cout << "The sum of all numbers between 1 and 1000 is " << sum << endl;

	// Nested loops
	// for (){
	//		for(){}
	//	}	
	int counter = 0;
	for (int k = 0; k < 10; k++) {
		for (int l = 0; l < 10; l++) {
			// number of times the nested loop ran
			counter++;
		}
	}
	cout << "The nested loop ran " << counter << endl;
	// set sum to 0 to not overlap results
	sum = 0;
	// update the loop with a -- to go from 1000 to 0
	for (int j = 1000; j > 0; j--) {
		sum += j;
	}
	cout << "The sum of all numbers between 1000 and 1 is " << sum << endl;

	// 1. *
	// 2. **
	// 3. ***
	// 4. ****
	// 5. *****

	cout << "*" << endl << "**" << endl << "***" << endl;

	// the outer defines the lines in the output
	for (int i = 1; i <= 20; i++) {
		// the inner defines the number of stars with respect to i
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		// end line
		cout << endl;
	}


	system("pause");
	return 0;
}
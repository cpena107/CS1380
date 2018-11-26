#include <iostream>
#include <string>

using namespace std;

// function prototype
// in order to define a function prototypes you need to
// define return type, function name, and parameters
void swapnum(int &i, int &j);
int timesTwo(int num);
double timesTwo(double second, int num);
void timesTwo(int num, double second, int third);
void timesTwo();
void timesTwo(int &num, int &num2);
void timesTwo2(int num, int num2);
void readEquation(int &num1, char division1, int &num2, char &operation,
	int &num3, char division2, int &num4);

int main() {

	int n1, n2, n3, n4;
	char division = ' ';
	char operation;

	readEquation(n1, division, n2, operation, n3, division, n4);

	cout << n1 << "/" << n2 << " " << operation << " " << n3 << "/" << n4 << endl;

	// to swap numbers in c++
	int i = 4;
	int j = 6;
	cout << "The value of i is " << i << endl;
	cout << "The value of j is " << j << endl;
	//call the function swapnum
	swapnum(i, j); // this will swap the values of i and j
	cout << "The value of i is " << i << endl;
	cout << "The value of j is " << j << endl;
	//int temp;
	//temp = i; // save i into the temporary variable
	//i = j; // store the value of j into i
	//j = temp; // set j with the value of temp (which is i)

	// test timesTwo with references
	int number1 = 2;
	int number2 = 4;
	// call the function timesTwo with two int
	timesTwo(number1, number2);
	cout << number1 << " " << number2 << endl;
	timesTwo2(number1, number2);
	cout << number1 << " " << number2 << endl;

	// test timesTwo
	int num = timesTwo(8);
	cout << num << endl;
	double num2 = timesTwo(4.0);
	cout << num2 << endl;
	// test timesTwo with 2 params
	double num3 = timesTwo(2.0, 2); 
	double num4 = timesTwo(4, 4.0);
	// the data type of the params activates a different function
	cout << num3 << " " << num4 << endl;
	// timesTwo() // we have 5 different timesTwo()


	system("pause");
	return 0;
}

//more about functions
// Overloading: 
// means using the same name for two or more functions
// condition: they have the same name, they need different parameters
int timesTwo(int num) {
	return num * 2;
}
// the names of the variables do not matter when overloading
double timesTwo(double second, int num) {
	return num * 2.0;
}
// not only the number of parameters matter in the function, 
// but the order of the parameters does too
double timesTwo(int num, double second) {
	return num * 4.0;
}

void timesTwo(int num, double second, int third) {

}

void timesTwo() {

}
/////////////////////////////////////////////////////////////

// Passing by reference
// & means you are passing by reference some variable
void timesTwo(int &num, int &num2) { // this multiplies by 2 every parameter
									 // and stores it inside the same variable
	num *= 2;
	num2 *= 2;
}

void timesTwo2(int num, int num2) { // this multiplies by 2 every parameter
									// and stores it inside the same variable
	num *= 2;						// but since there is not an & it won't 
	num2 *= 2;						// return the value to main
}

void swapnum(int &i, int &j) { // dont forget to add & if you are passing by reference
	int temp;
	temp = i; // save i into the temporary variable
	i = j; // store the value of j into i
	j = temp; // set j with the value of temp (which is i)
}

// First function of the extra credit assignment
void readEquation(int &num1, char division1, int &num2, char &operation,
					int &num3, char division2, int &num4) {
	cout << "Please enter your problem =>";
	// cin can take in as many >> as you need
	// this should accept something like 1/2-3/4
	cin >> num1 >> division1 >> num2 >> operation 
		>> num3 >> division2 >> num4;
}

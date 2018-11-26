#include <iostream>
#include <string>

using namespace std;

// function prototypes
// this makes the program look for your function
// before it begins running main
void getLetterGrade(double &grade, string &letter);
string getLetterGrade(double grade);
int timesTwo(int num);
double timesTwo(double num, int second);
int timesTwo(string num);
void swapnum(int i, int j);
void swapnum2(int &i, int &j);
void parseArgument(int &num1, char division1, int &num2,
	char &operation, int &num3, char division2, int &num4);

int main() {

	int num1, num2, num3, num4;
	char division = ' ';
	char operation;

	parseArgument(num1, division, num2, operation, 
										num3, division, num4);

	cout << num1 << "/" << num2 << " " << operation << " "
		<< num3 << "/" << num4 << endl;

	// test getLetterGrade
string lttr; // does not have to have the same name as in the funct.
double grade = 75;
// passing by reference changes grade and lttr
getLetterGrade(grade, lttr); 

cout << "Your grade is " << lttr << endl;

grade += 10;
// normal function only changes lttr
lttr = getLetterGrade(grade);

cout << "Your grade is " << lttr << endl;

	// test different fucntions
	cout << timesTwo(9) << endl;
	//cout << timesTwo(9.0) << endl;
	cout << timesTwo("Hello") << endl;

	int i = 2;
	int j = 4;

	swapnum(i, j);

	cout << "The value of i is " << i << endl;
	cout << "The value of j is " << j << endl;

	swapnum2(i, j);

	cout << "The value of i is " << i << endl;
	cout << "The value of j is " << j << endl;

	system("pause");
	return 0;
}

// Functions!

// Overloading: uses same name of the function, 
// but different parameters
int timesTwo(int num) {
	return num * 2;
}
// does the same as the above function
double timesTwo(double num, int second) {
	return num * 2.0;
}

int timesTwo(string num) {
	return 0;
}

//void timesTwo(int num) { // error if function has the same
//						// parameter (type and quantity)
//						// as the any other
//
//}
void timesTwo(int second, double nums) { // parameter placement (order)
										 // determines if your function is legal
										 // names of the functions don't matter

}
////////////////////////////////////////

// Passing by reference
// variables can be modified inside the function
// so they work in your main function
// example not passing by reference
void swapnum(int i, int j) { // this function will swap the
							 // values of i and j
							 // swap
	int temp = i; // palce the value of i in temp
	i = j; // place the value of j in i
	j = temp; // place the value of temp (j) in j
}
// example passing by reference
void swapnum2(int &i, int &j) { // this function will swap the
								// values of i and j
								// swap
	int temp = i; // palce the value of i in temp
	i = j; // place the value of j in i
	j = temp; // place the value of temp (j) in j
}

void getLetterGrade(double &grade, string &letter) {
	grade += 5;
	if (grade >= 90) {
		letter = "A";
	}
	else if (grade >= 80) {
		letter = "B";
	}
	else if (grade >= 70) {
		letter = "C";
	}
	else if (grade >= 60) {
		letter = "D";
	}
	else {
		letter = "F";
	}
}
// example from exam
string getLetterGrade(double grade) {
	if (grade >= 90) {
		return "A";
	}
	else if (grade >= 80) {
		return "B";
	}
	else if (grade >= 70) {
		return "C";
	}
	else if (grade >= 60) {
		return "D";
	}
	else {
		return "F";
	}
}
// here I am getting 2/5 - 4/7
void parseArgument(int &num1, char division1, int &num2,
	char &operation, int &num3, char division2, int &num4) {
	cout << "Please enter your problem => ";
	// like cout cin can get multiple inputs in one line
	cin >> num1 >> division1 >> num2 >> operation
		>> num3 >> division2 >> num4;
}

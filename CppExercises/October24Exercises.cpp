// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include <string>

using namespace std;



int main()

{



	//while loops!



	//example: infinite loop... this is probably a dumb idea.

	//	while ( 5 > 4 )

	//{

	//cout << "What will hapen here..." << endl;

	//}





	//challenge 1: print your name exactly 10 times
	int counter = 0;
	while (counter < 10) {
		cout << "Carlos";
		counter++;
	}

	//challenge 2: print 1 2 3 4 5 6 7 ... 29 30
	counter = 1;
	while (counter <= 30) {
		cout << counter << " ";
		counter++;
	}



	//challenge 3: Ask user to enter number, say 20.  Then countdown from that number to 1, 20 19 18.. 1 BLASTOFF!



	//challenge 4: Ask user to enter a number n.  compute and print value of 1+2+3 + ... + n.

	//Cool, can you do it with fewer variables?  Try it at home.





	//Challenge 5: Ask user to ennter secret password 
	// (it's "blastfoof" ).  If they guess wrong,

	//make keep entering until they guess correctly.
	string myPassword = "blastoff";
	string userPassword = " ";

	while (myPassword != userPassword) {

	}

	//For at home:  add a counter so it kicks you out if you guess more than 5 wrong passwords.





	return 0;

}
/*
#include <iostream>

#include <string>

using namespace std;



int main()

{
	int counter = 0;
	while (counter < 1) {
		cout << counter << endl;
		//counter--; // counter = counter -1;
		counter++; // counter = counter +1;
	}

	//step 0: variables and 
	//stuff
	//double exam1, exam2;
	int numExams;
	double score;
	double sum = 0;


	//step 1: ASk user how 
	//many exams they took
	cout << "Input the number of exams ";
	cin >> numExams;


	//step 2: Ask user to 
	//enter exam1 exam2 grades, 
	//one by one, sum the total
	counter = 0;
	//cout << "Enter grade for exam 1 ";
	//cin >> exam1;
	//cout << "Enter grade for exam 2 ";
	//cin >> exam2;
	while (counter < numExams) {
		cout << "Enter grade for exam " << counter + 1 << endl;
		cin >> score;
		sum += score; // sum = sum + score;
		counter++;
	}


	//step 3: compute average 
	// total/numExams
	double average;
	//average = (exam1 + exam2) / 2;
	average = sum / numExams;

	//step 4:  tell user their grade and if they passed.
	cout << "Your score is " << average << endl;

	if (average >= 60) {
		cout << "You Passed" << endl;
	}
	else {
		cout << "You Failed" << endl;
	}




	return 0;

}
*/

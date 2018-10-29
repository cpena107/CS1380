

#include <iostream>
#include <string>
using namespace std;

int main() 
{
	//step 0: variables and stuff
	int numExams;
	double score;
	double average;

	//step 1: ASk user how many exams they took
	cout << "HOw many exams did Schweller make you take this semester?" << endl;
	cin >> numExams;
	cout << "OUch!  " << numExams << " is pretty rough... " << endl;

	//step 2: Ask user to enter numExams grades, one by one, sum the total
	cout << "Please enter your exam grades one by one: " << endl;

	int counter = 0;
	double sum = 0;
	while (counter < numExams)
	{
		cin >> score;
		sum = sum + score;
		counter = counter + 1;
	}

	//step 3: compute average total/numExams
	average = sum / numExams;

	//step 4:  tell user their grade and if they passed.
	cout << "Your average is: " << average << endl;

	if (average >= 60)
	{
		cout << "You passed!" << endl;
	}
	else
	{
		cout << "See you next semester!" << endl;
	}


	return 0;
}
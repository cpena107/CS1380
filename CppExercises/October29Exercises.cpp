#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	//variables: ifstream and ofstream are used to read and write to files.
	double score;
	string letterGrade; //Could just use type char here, but you voted not to.
	ifstream infile;
	infile.open("gradeInfo.txt");
	ofstream outfile;
	outfile.open("gradeReport.txt");

	//step 0: Get student name from the input file.
	string name;
	infile >> name;

	//step 1: Get exam score(s) from the input file.
	cout << "Please enter your exam score (0-100): " << endl;
	infile >> score;

	//step 2: Calculate average (if there are multiple scores... do this later)
	double average = score;

	//step 3: Compute letter grade from number
	if (average >= 90)
	{
		letterGrade = "A";
	}
	else if (average >= 80)
	{
		letterGrade = "B";
	}
	else if (average >= 70)
	{
		letterGrade = "C";
	}
	else if (average >= 60)
	{
		letterGrade = "D";
	}
	else
	{
		letterGrade = "F";
	}

	//step 4: Write the name and letter grade to the output file.
	outfile << name << " scored  a: " << letterGrade << endl;

	return 0;
	/*
	ifstream inFile;	//input file stream variable
	ofstream outFile;	//output file stream variable

	double test1, test2, test3, test4, test5;
	double average;

	string firstName;
	string lastName;

	inFile.open("test.txt");

	if (!inFile) {
		cout << "Cannot open the input file. " << "The program terminates." << endl;
		return 1;
	}

	outFile.open("testavg.out"); //open the output file

	outFile << fixed << showpoint;
	outFile << setprecision(2);

	cout << "Processing data" << endl;

	inFile >> firstName >> lastName;
	outFile << "Student name: " << firstName << " " << lastName << endl;

	inFile >> test1 >> test2 >> test3 >> test4 >> test5;

	outFile << "Test scores: " << setw(6) << test1 << setw(6) << test2
		<< setw(6) << test3 << setw(6) << test4 << setw(6) << test5 << endl;

	average = (test1 + test2 + test3 + test4 + test5) / 5.0;

	outFile << "Average test score: " << setw(6) << average << endl;

	inFile.close();
	outFile.close();
	*/

}

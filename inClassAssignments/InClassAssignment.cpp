/////////////////////////////////////////////////////////
//
//	Name:
//	SID#
//	CSCI 1380 Section ..
//	Date:
//
//	This program simulates a magic eight ball
//	it takes in a yes or no question from the user 
//	and it answers with 8 possible options
//	Yes, Most Likely, It is certain, Signs point to yes
//	Cannot predict now, Ask again later, 
//	No, Don't count on it.
//
//////////////////////////////////////////////////////////

#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
//#include<fstream>

using namespace std;

int main() {

	// Initialize your random seed
	srand(time(NULL));

	// step 1: Declare your variables
	int answer;
	string question;

	// step 2: Ask the user to ask a yes/no question to the magic eight ball

	// step 3: Using your random number generator and decide the answer to give the user
	// HINT: answer = rand() % ? + 1

	// BONUS: Wrap your entire code (from step 2) in a while loop that after each question/answer
	//			it will ask the user (y/n) if he/she wants to ask another question.

	// BONUS: Save every question+answer in a file called "MyMagicEightBall.txt"

	system("pause");
	return 0;
}

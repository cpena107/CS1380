
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
	int counter;
	counter = 0;

	while (counter < 10)
	{
		cout << "Brandon Rulz" << endl;
		counter = counter + 1;
	}

	//challenge 2: print 1 2 3 4 5 6 7 ... 29 30
	counter = 1;
	while (counter <= 30)
	{
		cout << counter << " ";
		counter = counter + 1;
	}
	cout << endl;

	//challenge 3: Ask user to enter number, say 20.  Then countdown from that number to 1, 20 19 18.. 1 BLASTOFF!
	cout << "Please enter the countdown number: " << endl;
	cin >> counter;
	
	while (counter > 0)
	{
		cout << counter << endl;
		counter = counter - 1;
	}
	cout << "BLASTFOOF!" << endl;

	//challenge 4: Ask user to enter a number n.  compute and print value of 1+2+3 + ... + n.
	//Cool, can you do it with fewer variables?  Try it at home.
	int n;
	int sum =0;
	counter=0;
	cout << "Please enter a number n: " << endl;
	cin >> n;

	while ( counter < n )
	{
		counter = counter + 1;
		sum = sum + counter;
	}
	cout << "The sum of 1+..." << n << " is " << sum << endl;

	//Challenge 5: Ask user to ennter secret password (it's "blastfoof" ).  If they guess wrong,
	//make keep entering until they guess correctly.
	//For at home:  add a counter so it kicks you out if you guess more than 5 wrong passwords.

	string password = "blastfoof";
	string guess;

	cout << "Please enter the secret password: " << endl;
	cin >> guess;

	while (guess != password)
	{
		cout << "WRONG!  Try again: " << endl;
		cin >> guess;
	}

	cout << "Correct password!  Welcome!" << endl;


	return 0;
}
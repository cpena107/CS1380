

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x = -13;
	cout << "An int is: " << sizeof(x) << " bytes." << endl;

	float f = 3.14;
	double d = 3.14;

	cout << "A float is: " << sizeof(f) << endl;
	cout << "A double is: " << sizeof(d) << endl;

	bool b = true;
	cout << "a bool is: " << sizeof(b) << endl;
	
	
	string s;
	s = "This is a sentence.";
	cout << s << endl;
	string t = "This is a different sentence";
	cout << t << endl;
	


	
	return 0;
}
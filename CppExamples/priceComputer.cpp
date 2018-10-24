#include <iostream>
using namespace std;

int main()
{
	//step 1: find out the base price of the candybar
	double basePrice;
	cout << "Enter the base price (in dollars) of the candybar: " << endl;
	cin >> basePrice;

	//step 2: find out the sales tax percentage
	cout << "What is the sales tax in your land?: " << endl;
	double tax;
	cin >> tax;

	//step 3: calculate final price
	double totalPrice;
	totalPrice = (basePrice*tax) + basePrice;

	//step 4: report answer to user
	cout << "The candybar costs " << totalPrice << endl;

	return 0;
}

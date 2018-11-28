
#include <iostream>
#include <string>
using namespace std;

//This is the notation to 
//pass an array into a function
//May also use double * items.
double product(double items[], int size)
{
	double output = 1;
	for (int i = 0; i < size; i++)
	{
		output = output * items[i];
	}
	return output;
}

//print the items in the array of
//strings
void display(string items[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << items[i] << " ";
	}
}

double maximum(double items[], int size)
{
	double biggie = items[0];

	for (int i = 0; i < size; i++)
	{
		if (items[i] > biggie)
		{
			biggie = items[i];
		}
	}

	return biggie;
}

//return index position of value 'key'
//within given array.
//Return -1 if key is not in array.
int findIndex(double items[], int size, double key)
{
	for (int i = 0; i < size; i++)
	{
		if (items[i] == key)
		{
			return i;
		}
	}
	return -1;
}

//change each occurence of word1 in items array
//to be word2.
void wordReplace(string items[], int size, string word1, string word2)
{
	for (int i = 0; i < size; i++)
	{
		if (items[i] == word1)
		{
			items[i] = word2;
		}
	}
}

int main()
{
	//an array of 10 doubles
	double numbers[10];
	int n = 0;

	//can set "cells" in the array
	numbers[0] = 5.5;
	numbers[1] = 8.5;
	numbers[2] = 2.5;
	numbers[3] = 3.9;
	numbers[4] = 700.6;
	numbers[5] = 3.6;
	numbers[6] = 8.8;
	numbers[7] = 300;
	numbers[8] = 4.2;
	numbers[9] = 2;
	// keep track of the "length" (number of valid entries)
	n = 10;

	//Can look at them as well
	for (int i = 0; i < n; i++)
	{
		cout << "Cell " << i << ": " << numbers[i] << endl;
	}

	//array of 8 strings
	string words[8];
	int words_ct = 8;

	words[0] = "I";
	words[1] = "hate";
	words[2] = "1370";
	words[3] = "because";
	words[4] = "I";
	words[5] = "hate";
	words[6] = "programming";
	words[7] = "computers";
	words_ct = 8;

	//Challenge:
	wordReplace(words, words_ct, "hate", "love");

	//print the words like they are a sentence
	display(words, words_ct);


	//May pass arrays to functions
	cout << "the product of the numbers: " << product(numbers, n) << endl;

	cout << "The largest number in our array is: " << maximum(numbers, n) << endl;

	cout << "8.8 is at index: " << findIndex(numbers, n, 8.8) << endl;

	return 0;
}

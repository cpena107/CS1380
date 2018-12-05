#include <iostream>
#include <string>

using namespace std;

// prototype
void wordReplace(string wordReplace, string newWord, string words[], int sizeOfWords);

int main() {

	// an array example
	double myArray[10]; // definition of an array size 10
	
	// can set "cells" (indexed values) in the array
	// using the index value in the array
	myArray[0] = 2.5; // first element in the array myArray
	myArray[1] = 3.4; // second element
	myArray[2] = 34.2; // third element
	//..
	//..
	//..
	myArray[9] = 1.3; // last element of the array myArray
	// myArray[10] <- this is considered out of bounds
	// In Computer Science we like to start from 0
	int sizeOfArray = 10; // save the length of the array


	// looking into the array elements
	for (int i = 0; i < sizeOfArray; i++) {
		// output every cell individually
		cout << "The value at index " << i << " is " << myArray[i] << endl; // i will update every time the loop runs 
	}

	// arrays can be defined with any type of data
	// string
	string words[8]; // definition for an array of strings
	words[0] = "I"; // first string in the array
	words[1] = "hate";
	words[2] = "1380";
	words[3] = "because";
	words[4] = "I";
	words[5] = "hate";
	words[6] = "programming";
	words[7] = "computers"; // last string in the array

	int sizeOfWords = 8;

	// challenge
	// replace a specific word from the array with another

	for (int j = 0; j < sizeOfWords; j++) {
		// cout << words[j] << " "; // display the old array
		if (words[j] == "hate") { // if we find hate, replace it with love
			words[j] = "love"; // assign love to the element at index j
		}
		cout << words[j] << " "; // this line will output words[0] word[1] ....
	}

	wordReplace("love", "dislike", words, sizeOfWords);

	// using myArray lets find the number 34.2
	// start the loop
	int index;
	for (int k = 0; k < sizeOfArray; k++) { // if you declare the control variable inside the for loop
											// you can't use the variable outside of it
		if (myArray[k] == 34.2) {
			// found my index and I can stop
			index = k;
			break; // stops the loop completely when called
		}
		// if you never find the value make the index be -1
		else if (k == sizeOfArray - 1) { // -1 because k 
			// number not found
			index = -1;
		}
	}
	// k doesn't exist below this line
	if (index == -1) {
		cout << "Number not found" << endl;
	}
	else {
		cout << "The number was at index " << index << endl;
	}


	system("pause");
	return 0;

}

// now create a function to replace a specific word from the array with another
// parameters for the function => 1. word to replace (string) ex. "hate"
//								  2. the new word (string) ex. "love"
//								  3. pass my array ex. words
//								  4. size of the array ex. sizeOfWords
// return type for this function will be void

void wordReplace(string wordReplace, string newWord, string words[], int sizeOfWords) {
	for (int j = 0; j < sizeOfWords; j++) {
		// cout << words[j] << " "; // display the old array
		if (words[j] == wordReplace) { // if we find hate, replace it with love
			words[j] = newWord; // assign love to the element at index j
		}
		cout << words[j] << " "; // this line will output words[0] word[1] ....
	}
}

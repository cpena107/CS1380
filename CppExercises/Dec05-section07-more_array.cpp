#include <iostream>
#include <string>

using namespace std;

// prototype
void wordReplace(string wordReplace, string newWord, int sizeOfWords, string words[]);

int main() {

	// defining an array
	// data type, name, size of array in [ ]
	// string, double, int, bool
	double myArray[10]; // definition of an array called myArray of size 10

	// can set "cells" (indexed values) in the array
	// using an index value in the array
	myArray[0] = 2.5; // the first element of the array
	myArray[1] = 3.4; // the second element of the array
	myArray[2] = 34.2; // the third
	// ..
	// ..
	// ..
	myArray[9] = 1.3; // this the last element in the array myArray
	// myArray[10] <- out-of-bounds error
	// the last possible index is the size of the array -1

	// double num1, num2, ...

	int sizeOfArray = 10;
	for (int i = 0; i < sizeOfArray; i++) {
		// output every item in the array
		cout << "The value at index " << i << " is " << myArray[i] << endl;
		// the line above will go from i = 0 to i = 10 in steps of 1
	}

	// arrays with string
	string words[8]; // defining an array with 8 strings

	// assign different string to each cell
	words[0] = "I"; // first string in the array
	words[1] = "hate"; 
	words[2] = "1380";
	words[3] = "because";
	words[4] = "I";
	words[5] = "hate";
	words[6] = "programming";
	words[7] = "computers"; // last string in the array

	string myMessage = "I hate 1380 because I hate programming";



	// challenge
	// replace the word hate with the word love in the array words
	int sizeOfWords = 8;
	// before we modify the array
	for (int j = 0; j < sizeOfWords; j++) {
		cout << words[j] << " ";
	}
	cout << endl;

	// modifying the array
	for (int j = 0; j < sizeOfWords; j++) {
		// for loop goes from j = 0 to j = 8
		if (words[j] == "hate") { // if we find hate, replace it with love
			words[j] = "love";
 		}
		// output each item in the array words
		cout << words[j] << " ";
	}

	cout << endl;

	wordReplace("I", "We", sizeOfWords, words); // pass the array to the function without []

	// find a value in an array 
	// find the number 34.2 in the array myArray, if its not in the array set the index to -1
	int index;
	for (int k = 0; k < sizeOfArray; k++) {
		// look for the number 34.2
		if (myArray[k] == 34.2) {
			// number found at index k
			index = k; // found at index 2
			break; // when this line runs it stops the loop
			/*
			if you have something like a nested loop
			for(1;2;3){
				for(1;2;3){
					break; // breaks out of the current loop
				}
			}
			
			*/
		}
		// if the number is not in the array set index to -1
		else if (sizeOfArray -1 == k) {
			index = -1;
		}
	}// the variable k does nopt exist below this line

	if (index == -1) {
		cout << "Number not found" << endl;
	}
	else {
		cout << "My number was found at index " << index << " " << myArray[index] << endl;
	}
	
	system("pause");
	return 0;

}

// create a function that replaces a word with another in an array
// parameters for the function: 1. word to replace (string)
//								2. new word (string)
//								3. the size of words (int)
//								4. the array to modify (string)
// return type : void
// function name: wordReplace
void wordReplace(string wordReplace, string newWord, int sizeOfWords, string words[]) { // words[] is a placeholder for an array of any size
	for (int j = 0; j < sizeOfWords; j++) {
		// for loop goes from j = 0 to j = 8
		if (words[j] == wordReplace) { // if we find wordReplace, replace it with newWord
			words[j] = newWord;
		}
		// output each item in the array words
		cout << words[j] << " ";
	}
}

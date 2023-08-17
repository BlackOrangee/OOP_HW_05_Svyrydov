#include "mystring.h"
#include <iostream>
using namespace std;

// Default constructor
mystring::mystring()
{
	str = new char[80]; // Allocate memory for the string
	this->size = 80;    // Set the total size of the string
	usedsize = 0;       // Initialize usedsize to 0
	cin >> str;         // Input the string from user
	usedsizer();        // Calculate usedsize based on the entered string
}

// Parameterized constructor with specified size
mystring::mystring(int size)
{
	str = new char[size + 1]; // Allocate memory for the string
	this->size = size;    // Set the total size of the string
	usedsize = 0;             // Initialize usedsize to 0
	cin >> str;               // Input the string from user
	usedsizer();              // Calculate usedsize based on the entered string
}

// Parameterized constructor with existing character array and size
mystring::mystring(char* str, int size)
{
	this->size = size; // Set the total size of the string
	this->str = str;   // Set the provided character array as the string
	usedsizer();       // Calculate usedsize based on the provided string
}

// Constructor that copies the contents of another mystring object
mystring::mystring(mystring* str)
{
	this->str = str->GetStr();       // Copy the pointer to the character array
	this->size = str->GetSize();     // Copy the total size of the character array
	this->usedsize = str->GetUsedSize(); // Copy the number of characters used in the string
}

// Return the number of characters used in the string
int mystring::GetUsedSize()
{
	return usedsize;
}

// Return the pointer to the character array storing the string
char* mystring::GetStr()
{
	return str;
}

// Helper function to calculate usedsize based on the string content
void mystring::usedsizer()
{
	int i = -1;
	do
	{
		i++;
		usedsize++;
	} while (str[i] != '\0');
}

// Print the string
void mystring::Print()
{
	cout << str;
}

// Get the total size of the character array
int mystring::GetSize()
{
	return size;
}



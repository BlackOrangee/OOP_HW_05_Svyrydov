#include "mystring.h"
#include <iostream>
using namespace std;

// Return the number of characters used in the string
int mystring::GetUsedSize()
{
	return usedsize;
}

// Default constructor
mystring::mystring()
{
	str = new char[81]; // Allocate memory for the string
	this->size = 81;    // Set the total size of the string
	usedsize = 0;       // Initialize usedsize to 0
	cin >> str;         // Input the string from user
	usedsizer();        // Calculate usedsize based on the entered string
}

// Parameterized constructor with specified size
mystring::mystring(int size)
{
	str = new char[size + 1]; // Allocate memory for the string
	this->size = size + 1;    // Set the total size of the string
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




//void mystring::Add(mystring str)
//{
//	size += str.GetSize() - 1;
//	char* newstr = new char[size];
//	
//	int i = 0;
//	while (this->str != '\0')
//	{
//		newstr[i] = this->str[i];
//		i++;
//	}
//	
//	int j = 0;
//	while (str.str != '\0')
//	{
//		newstr[i] = str.str[j];
//		i++;
//		j++;
//	}
//
//	this->str = newstr;
//}

//void mystring::Cut(int num)
//{
//	if (num >= usedsize)
//	{
//		cerr << "out of size";
//		return;
//	}
//	mystring newstr(size - num);
//
//	int i = 0;
//	while (str[i + num + 1] != '\0')
//	{
//		newstr.str[i] = str[i];
//		i++;
//	}
//	str = newstr.str;
//	usedsizer();
//}

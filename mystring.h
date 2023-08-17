#pragma once
class mystring
{
private:
	char* str = nullptr;  // Pointer to the character array storing the string
	int size;             // Total size of the character array, including null-terminator
	int usedsize;         // Actual number of characters used in the string
	void usedsizer();     // Helper function to calculate usedsize

public:
	// Default constructor
	mystring();

	// Parameterized constructor with specified size
	mystring(int);

	// Parameterized constructor with existing character array and size
	mystring(char*, int);

	// Constructor that initializes a mystring object using another mystring object
	mystring(mystring*);

	// Return the pointer to the character array storing the string
	char* GetStr();

	// Print the string
	void Print();

	// Get the total size of the character array
	int GetSize();

	// Get the number of characters used in the string
	int GetUsedSize();
};


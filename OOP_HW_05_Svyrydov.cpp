

#include <iostream>
#include "mystring.h"
using namespace std;

int main()
{
    // Demonstrating the different constructors and member functions of mystring class

     // Default constructor
    cout << "\n\nDefault constructor (80): ";

    // Creating a mystring object using the default constructor
    mystring str1;

    // Printing the string stored in str1 using Print() function
    cout << "\n\nPrint: ";
    str1.Print();  

    // Getting and printing the total size of the character array
    cout << "\n\nSize: " << str1.GetSize();

    // Getting and printing the used size of the string
    cout << "\n\nUsed Size: " << str1.GetUsedSize();

    // Constructor with specified size
    cout << "\n\n\n\nConstructor with specified size: ";
    int size = 0;
    cout << "\n\nEnter size: ";
    cin >> size;
    cout << "\n\nEnter string: ";

    // Creating a mystring object with the specified size
    mystring str2(size);

    // Printing the string stored in str1 using Print() function
    cout << "\n\nPrint: ";
    str2.Print();

    // Getting and printing the total size of the character array
    cout << "\n\nSize: " << str2.GetSize();

    // Getting and printing the used size of the string
    cout << "\n\nUsed Size: " << str2.GetUsedSize();

    // Constructor with existing character array and size
    cout << "\n\n\n\nConstructor with existing character array and size: ";
    cout << "\n\nEnter size: ";
    cin >> size;

    char* str = new char[size];
    cout << "\n\nEnter string: ";
    cin >> str;

    // Creating a mystring object using an existing character array and size
    mystring str3(str, size);

    // Printing the string stored in str1 using Print() function
    cout << "\n\nPrint: ";
    str3.Print();

    // Getting and printing the total size of the character array
    cout << "\n\nSize: " << str3.GetSize();

    // Getting and printing the used size of the string
    cout << "\n\nUsed Size: " << str3.GetUsedSize();

    // Constructor that initializes a mystring object using another mystring object
    cout << "\n\n\n\nConstructor that initializes a mystring object using another mystring object: ";

    mystring str4(str1);  // Creating a mystring object using another mystring object

    // Printing the string stored in str1 using Print() function
    cout << "\n\nPrint: ";
    str4.Print();

    // Getting and printing the total size of the character array
    cout << "\n\nSize: " << str4.GetSize();

    // Getting and printing the used size of the string
    cout << "\n\nUsed Size: " << str4.GetUsedSize();
}

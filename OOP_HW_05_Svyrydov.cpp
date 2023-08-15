

#include <iostream>
#include "mystring.h"
using namespace std;

int main()
{
    mystring str1;

    cout << "\n\nPrint: ";
    str1.Print();

    cout << "\n\nSize: " << str1.GetSize();
    
    cout << "\n\nUsed Size: " << str1.GetUsedSize();


    //mystring str2;

    //str1.Add(str2);

    //cout << "\n\nPrint str1 with str2: ";
    //str1.Print();

    //str1.Cut(3);
    //cout << "\n\nCut 3 symbols: ";
    //str1.Print();
}

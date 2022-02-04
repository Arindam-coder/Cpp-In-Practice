/*
The ASCII lowercase letters are separated from the uppercase letters by 32. Thus, to convert a
lowercase letter to uppercase, subtract 32 from it. Use this information to write a program that
reads characters from the keyboard. Have it convert all lowercase letters to uppercase, and all
uppercase letters to lowercase, displaying the result. Make no changes to any other character. Have
the program stop when the user enters a period. At the end, have the program display the number
of case changes that have taken place.

C++: A beginner's Guide Chapter 3- problem 10
*/

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter any character: ";
    char c;
    cin >> c;
    cout << (char)(c-32) ;
    cout << "\n";

    return 0;
}
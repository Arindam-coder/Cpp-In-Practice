/*
C++ A Beginner's Guide 2nd Edition (2003)
Chapter 1: Excercise-16

Problem Statement:
Write a program that averages the absolute value of five values entered by the user. Display the
result.

Logic:
1. Take the inputs from command line.
2. Add them and divide by 5 and print as output.
*/

#include<iostream>
using namespace std;

int main(int argc, char**argv){
    int a, b, c, d, e;
    cout << "Enter the 5 numbers.\n";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cout << (a+b+c+d+e)/5.0 << " is the average of the given five input.\n";
    return 0;
}

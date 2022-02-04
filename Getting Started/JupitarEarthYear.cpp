/*
C++ A Beginner's Guide 2nd Edition (2003)
Chapter 1: Excercise-14

Problem Statement:
A year on Jupiter (the time it takes for Jupiter to make one full circuit around the Sun) takes about
12 Earth years. Write a program that converts Jovian years to Earth years. Have the user specify the
number of Jovian years. Allow fractional years.

Logic:
1. Take the input.
2. Divide it by 12 and print.
*/

#include<iostream> 
using namespace std;
int main(int argc, char**argv){
    float earth;
    cin >> earth;
    cout << earth << " Earth year on Earth is equal to " << earth/12.0 << " years on Jupiter.\n";
    return 0;
}

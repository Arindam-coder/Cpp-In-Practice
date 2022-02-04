/*
Pepcoding DSA Lavel 1- Problem 11: Gcd and Lcm
-------------------------------------------------------
created by: ARINDAM MAJEE
date & time: 8:00 AM Feb 2 2022
----------------------------------------------------------
QUESTION
--------------------------------
1. You are required to print the Greatest Common Divisor (GCD) of two numbers.
2. You are also required to print the Lowest Common Multiple (LCM) of the same numbers.
3. Take input "num1" and "num2" as the two numbers.
4. Print their GCD and LCM.
------------------------------------------------------------------
INPUT FORMAT
--------------------------------
num1
num2
.. the numbers whose GCD and LCM we have to find.
----------------------------------------------------------------
OUTPUT FORMAT
--------------------------------
a
b
.. where 'a' and 'b' are the GCD and LCM respectively.
----------------------------------------------------------------
CONSTRAINTS
--------------------------------
2 <= n <= 10^9
----------------------------------------------------------------
LOGIC FOR SOLVING
--------------------------------
1. Find the smaller and larger number.
2. GCD will be always smaller or equal to the smaller number.
3. LCM will be always greater or equal to the larger number.
4. Find the GCD by iterating from 1 to the smallest numbers.
5. Find the LCM using the formula: LCM(a,b)=(a*b)/GCD(a,b)
----------------------------------------------------------------
COMPLEXITY
--------------------------------
Time: O(n)
Space: O(1)
----------------------------------------------------------------
*/

#include<iostream>
#include<cmath>
using namespace std;

int GCD(int num1, int num2)
{
    int small=num2;
    int large=num1;
    if(num1 <num2)
    {
        small=num1;
        large=num2;
    }
    int gcd=1;
    for(int i=1; i<=small; i++)
    {
        // Check by which number both are divisible and set that as GCD.
        if(small%i==0 && large%i==0) gcd=i; 
    }
    return gcd; // Return GCD
}
int main()
{
    int num1, num2;
    cout << "Enter the two numbers: " << endl;
    cin >> num1 >> num2;
    int gcd=GCD(num1, num2);
    int lcm=(num1*num2)/gcd;
    cout << "The GCD of the number " << num1 << " and " << num2 << " is " 
    << gcd << " and the LCM is " << lcm << endl;
    return 0;
}
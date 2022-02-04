/*
Pepcoding DSA Level-1 Problem - 7: Digits Of A Number
-------------------
--------------------------
created by: ARINDAM MAJEE
date: Jan 31, 2022
time: 8:15 AM IST
-------------------------
--------------------
QUESTION
------------------------------------------------------------
1. You've to display the digits of a number.
2. Take as input "n", the number for which digits have to be displayed.
3. Print the digits of the number line-wise.
----------------------------------------
INPUT FORMAT
----------------------------------------
"n" where n is any integer.
----------------------------------------
OUTPUT FORMAT
----------------------------------------
d1
d2
d3
... digits of the number
----------------------------------------
LOGIC FOR SOLVING PROBLEM
------------------------------------------------------------
1. Divide the number n by 10 and print the remainder.
2. Set the Quuotient to the number and repeat the division process 
   as stated in step 1. untill it becomes zero.
------------------------------------------------------------
*/
// Time complexity of this program is O(no of digits)

#include <iostream>
using namespace std;

int main()
{
    int n, r, i=0;
    int digits[10];
    cin >> n;
    cout << "The digits in the number are: " << endl;
    do
    {
        r=n%10;
        digits[i]=r;
        i++;
        n=n/10;
    } while(n!=0);
    for(int j=i; j>0; j--) cout << digits[j-1] << endl;
    return 0;
}
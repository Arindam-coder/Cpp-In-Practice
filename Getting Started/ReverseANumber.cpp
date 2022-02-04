/*
Pepcoding DSA Level-1 Problem - 8: Reverse A Number
-------------------
--------------------------
created by: ARINDAM MAJEE
date: Jan 31, 2022
time: 8:30 AM IST
-------------------------
--------------------
QUESTION
------------------------------------------------------------
1. You've to display the digits of a number in reverse.
2. Take as input "n", the number for which digits have to be display in reverse.
3. Print the digits of the number line-wise, but in reverse order.
-----------------------
INPUT FORMAT
-----------------------
"n" where n is any integer.
-----------------------
OUTPUT FORMAT
-----------------------
d1
d2
d3
... digits of the number in reverse
----------------------------------------------
*/
// Time complexity of this program is O(no of digits)
// Space complexity of this program is O(no of digits)

#include <iostream>
using namespace std;

int main()
{
    int n, r;
    cin >> n;
    string s="";
    cout << "The digits in the given number in reverse order is: ";
    do
    {
        r=n%10;
        n=n/10;
        cout << r << endl;
        s= s + to_string(r);
    }
    while(n!=0);
    cout << "Reversed number in string format is " << s << endl;
    return 0;
}
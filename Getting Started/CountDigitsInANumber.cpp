/*
Pepcoding DSA Level-1 Problem - 6: Count Digits In A Number

--------------------
OUESTION
--------------------------------------------------------------------------------
1. You've to count the number of digits in a number.
2. Take as input "n", the number for which the digits has to be counted.
3. Print the digits in that number.
----------------------------------------
INPUT FORMAT
----------------------------------------
"n" where n is any integer.
----------------------------------------
OUTPUT FORMAT
----------------------------------------
"d" where d is the number of digits in the number "n"
------------------------------------------------------------
LOGIC FOR SOLVING
------------------------------------------------------------
1. Divide the number n by 10 and discard the remainder.
2. Keep the Quuotient and repeat the division process untill it 
   becomes zero. Count the number of times you have divided.
------------------------------------------------------------
*/
// Time complexity of this program is O(no of digits)

#include <iostream>
using namespace std;

int main()
{
    int n, quotient, d=0;
    cin >> n;
    quotient = n;
    cout << "The num digit in the given number " << n << " is ";
    do
    {
        quotient = n/10;
        n=quotient;
        d++;
    } while(quotient!=0);
    cout << d << endl;
    return 0;
}

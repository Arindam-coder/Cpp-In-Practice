/*
Pepcoding DSA Level-1 Problem - 5: Print Fibonacci Numbers Till N

---------------------------------------------------------
QUESTION
---------------------------------------------------------
1. You've to print first n fibonacci numbers.
2. Take as input "n", the count of fibonacci numbers to print.
3. Print first n fibonacci numbers.
---------------------------------------------------------
Input Format
---------------------
n
---------------------
Output Format
---------------------
0
1
1
2
3
5
8
.. first n fibonaccis

------------------------------------------------------------
LOGIC
---------------------------------------------------------------
1. Fibonacci numbers starts from 0 & 1. The n-th term of a fibonacci
series is = (n-1)-th term + (n-2)-th term.
2. Increment the counter from 2 to n and in each step print the
sum of previous two numbers.
3. Then assign the numbers properly.
---------------------------------------------------------------
*/

#include<iostream>

using namespace std;

int main()
{
    int a, b, c, n;
    cin >> n;
    a=0;
    b=1;
    c=a+b;
    cout << a <<"\n";
    cout << b << "\n";
    for(int i=2; i<n; i++)
    {
        cout << c << "\n";
        a=b;
        b=c;
        c=a+b;

    }
    return 0;
}
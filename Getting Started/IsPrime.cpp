/*
Pepcoding DSA Level Problem - 3: Is a number prime

------------------------------------------------------------------------------
Question 
------------------------------------------------------------------------------
1. You've to check whether a given number is prime or not.
2. Take a number "t" as input representing count of input numbers to be tested.
3. Take a number "n" as input "t" number of times.
4. For each input value of n, print "prime" if the number is prime and "not prime" otherwise.
------------------------------------------------------------------------------

Input Format
------------
A number t
A number n
A number n
.. t number of times

Output Format
-------------
prime
not prime
not prime
.. t number of times
------------------------------------------------------------------------------

Logic for solving problem
-------------------------
If a number is only divisble by 1 and that number then it is prime otherwise it
is not prime.

Algorithm for solving problem
-----------------------------
1. Take the input t.
2. Create a for loop for t times to take all the inputs.
3. Take a counter and create another for loop from 1 to number/2 and check if the
   number is divisble by any other number. If yes then increment the counter.
4. If the counter is 1, then it is prime. Else it is not prime.

*/

#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    int count[t];
    int num, c;
    
    for(int i=0; i<t; i++)
    {
        cin >> num;
        c=0;
        for(int j=1; j<=num/2; j++)
        {
            if(num%j==0)
            {
                c += 1;    
            }
        }
        count[i] = c;
    }
    
    for(int i=0; i<t; i++)
    {
        c=count[i];
        if(c==1)
        {
            cout << "prime\n";
        }
        else if(c >1)
        {
            cout << "not prime\n";
        }
        else
        {
            cout << "Something wrong\n";
        }
    }
    
    return 0;
}

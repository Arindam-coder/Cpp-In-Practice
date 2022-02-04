/*
Pepcoding DSA Lavel 1- Problem 13: The Curious Case Of Benjamin Bulbs
-------------------------------------------------------
created by: ARINDAM MAJEE
date & time: 1:10 PM Feb 3 2022
----------------------------------------------------------
QUESTION
-------------------------------
1. You are given n number of bulbs. They are all switched off. A weird 
   fluctuation in voltage hits the circuit n times. In the 1st 
   fluctuation all bulbs are toggled, in the 2nd fluctuation every 
   2nd bulb is toggled, in the 3rd fluctuation every 3rd bulb is toggled 
   and so on. You've to find which bulbs will be switched on after n 
   fluctuations.
2. Take as input a number n, representing the number of bulbs.
3. Print all the bulbs that will be on after the nth fluctuation in 
   voltage.
--------------------------------------------------------------
INPUT FORMAT
-------------------------------
n, an integer
--------------------------------------------------------------
OUTPUT FORMAT
-------------------------------
b1 b2 b3 b4 .. all bulbs that will be on after nth wave
--------------------------------------------------------------
CONSTRAINTS
-------------------------------
2 <= n < 10^9
--------------------------------------------------------------
SAMPLE
-------------------------------
Input: 6
Output: 1 4
--------------------------------------------------------------
LOGIC FOR SOLVING
-------------------------------
1. If a bulb is toggled for odd times, it will be ON but if it is
   toggled for even times then it will remian OFF.
2. Find the number of factors of the bulb id.
3. The first bulb will always remain ON.
--------------------------------------------------------------
COMPLEXITY
-------------------------------
Time: O(n^2). As there are two loops and the inner loop runs upto 
Space: O(1)
--------------------------------------------------------------
COMMENTS
-------------------------------
1. Only square number bulbs will be ON becuase for any prime number
   or composite number there will be always even number of factors 
   (including 1). Optimize the solution using this concept.
--------------------------------------------------------------
*/

#include<iostream>
//#include<cmath>
using namespace std;

void BenjaminBulbs(int num)
{
    // First Bulb will always ON.
    cout << 1 << " ";
    int count = 1;
    for (int i=2; i<=num; i++)
    {
        for (int j=2; j<=i; j++)
        {
            if (i%j==0)
            {
                count=count+1;      // Find the number of factors
            }
        }
        if (count%2==1)
        {
            cout << i << " "; // If no of factors is odd then bulb will be ON.
        }
        count=1;
    }
}

// Driver Function
int main()
{
    int n;
    cout << "Enter the number of bulbs: ";
    cin >> n;
    cout << "The bulbs which will be ON after n-th fluctuation are: ";
    BenjaminBulbs(n);
    cout << endl;
    return 0;
}
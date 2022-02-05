/*
Pepcoding DSA Level 1 -> Pattern: Probelm- 3
----------------------------
created by: ARINDAM MAJEE
date & time: 1:15 PM Feb 5 2022
-------------------------------------------------------
QUESTION
----------------------------
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as
   shown in output format.
--------------------------------------------------------
INPUT FORMAT
----------------------------
A number n
--------------------------------------------------------
OUTPUT FORMAT
----------------------------
                        *
                *       *
        *       *       *
        *       *       * 
*       *       *       * 
--------------------------------------------------------
CONSTRAINTS
----------------------------
1<=n<=100
--------------------------------------------------------
SAMPLE
----------------------------
Input: 5
Output: 
				*	
			*	*	
		*	*	*	
	*	*	*	*	
*	*	*	*	*	
--------------------------------------------------------
COMPLEXITY
----------------------------
Time: O(n(n+1)/2). The outer loop runs n times and the inner
      loop runs upto the index of outer loop.
Space: O(1)
--------------------------------------------------------
COMMENTS
----------------------------
--------------------------------------------------------
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i=0; i<n; i++)
    {
        for(int j=1; j<n-i; j++)
        {
            cout << " \t";
        }
        for (int j=0; j<=i; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
    return 0;
}
/*
Optimized Solution for the previous problem: The Curious Case Of Benjamin Bulbs
--------------------------------------------------------------
created by: ARINDAM MAJEE
date & time: 7:30 AM Feb 4 2022
--------------------------------------------------------------
LOGIC FOR SOLVING
-------------------------------
1. Find if a term is perfect square or not. From the previous discussion
   it is confirrm that only perfect square numbered bulbs will glow because
   only perfect squares have odd number of factors. Why? Let's Analyse.
   For every prime number there are two factors and those are 1 and that
   number. For every composite number let it has a factor 'a'. Now, surely
   it will have another factor whose value is 'b'='n'/'a'. Hence, composite
   numbers also have factors in pair. Now, if 'n' is a perfect square and
   'a' is it's square root, then 'a'='b' and hence this makes them a single
   factor. So, only perfect square numbers have odd number of factor.
--------------------------------------------------------------
COMPLEXITY
-------------------------------
Time: O(sqrt(n))
Space: O(1)
--------------------------------------------------------------
COMMENTS
-------------------------------
--------------------------------------------------------------
*/

#include<iostream>
#include<cmath>
using namespace std;

void BenjaminBulbsOptimized(int num)
{
    for(int i=1; i<=sqrt(num); i++)
    {
        cout << i*i << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The Bulbs which will be ON after n-th fluctuation: ";
    BenjaminBulbsOptimized(n);
    cout << "\n";
    return 0;
}
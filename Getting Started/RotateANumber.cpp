/*
Pepcoding DSA Lavel 1- Problem 10: Rotate A Number
-------------------------------------------------------
created by: ARINDAM MAJEE
date & time: 7:30 AM Feb 2 2022
----------------------------------------------------------
QUESTION
-----------------------------
1. You are given two numbers n and k. You are required to 
   rotate n, k times to the right. If k is positive, rotate 
   to the right i.e. remove rightmost digit and make it leftmost. 
   Do the reverse for negative value of k. Also k can have an 
   absolute value larger than number of digits in n.
2. Take as input n and k.
3. Print the rotated number.
4. Note - Assume that the number of rotations will not cause 
   leading 0's in the result. e.g. such an input will not be 
   given
   n = 12340056
   k = 3
   r = 05612340
----------------------------------------------------------
INPUT FORMAT
-----------------------------
"n" where n is any integer.
"K" where k is any integer.
----------------------------------------------------------
OUTPUT FORMAT
-----------------------------
"r", the rotated number
----------------------------------------------------------
CONSTRAINTS
-----------------------------
1 <= n < 10^9
-10^9 < k < 10^9
----------------------------------------------------------
LOGIC FOR SOLVING
-----------------------------
1. Find the total number of digits in n.
2. Find the smallest possible value of k.
3. Rotating k (k>0) elements in rightward means divide the number into
   two parts wher first part contains (n-k) elements and second part
   contains k elements. Now, pick up the second part and put it before
   the first part i.e. multiply the second part with a proper value of
   base and add the first part. Example: n=12345, k=2. So, part1=123,
   part2=45. Now, 45*1000+123=45123 is the rotated number.
4. If k<0 then we have to rotated the elements in leftward. Example:
   n=12345, k=-2, so r=34512. Instead of rotating 2 times consider it
   as rotating in rightwards for 3 times i.e. (n+k) times.
----------------------------------------------------------
COMPLEXITY
-----------------------------
Time: O(log10(n)). As the no of iterations in the do-while loop depends
      on the length of input number n.
Space: O(1)
----------------------------------------------------------
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, k, q, idx=0;
    cout << "Enter the value of n and k: ";
    cin >> n;
    cin >> k;
    q=n;
    do
    {
        q=q/10;
        idx++;
    } while(q!=0);
    // Find the samllest possible value for k
    k=k%idx;
    //Convert negative k to positive value
    if(k<0) k=idx+k;

    //Find the value of divisor for dividing the number into two parts
    int div=pow(10, k);
    int part1=n/div;
    int part2=n%div;

    int r= (part2*pow(10, idx-k))+part1;
    
    cout << "Here is your rotated number: " << r << endl;
    return 0;
}

/*
Pepcoding DSA Lavel 1- Problem 9: Inverse Of A Number
--------------------------------------------------------
created by: ARINDAM MAJEE
date & time: 7:30 AM Feb 1 2022
------------------------------------------------------------------
QUESTION
--------------------------------------------
1. You are given a number following certain constraints.
2. The key constraint is if the number is 5 digits long, it'll contain all 
   the digits from 1 to 5 without missing any and without repeating any. 
   e.g. 23415 is a 5 digit long number containing all digits from 1 to 5 
   without missing and repeating any digit from 1 to 5.Take a look at few 
   other valid numbers - 624135, 81456273 etc.Here are a few invalid numbers
    - 139, 7421357 etc.
3. The inverse of a number is defined as the number created by interchanging 
   the face value and index of digits of number.e.g. for 426135 (reading from 
   right to left, 5 is in place 1, 3 is in place 2, 1 is in place 3, 6 is in 
   place 4, 2 is in place 5 and 4 is in place 6), the inverse will be 416253 
   (reading from right to left, 3 is in place 1, 5 is in place 2,2 is in place 
   3, 6 is in place 4, 1 is in place 5 and 4 is in place 6) More examples - 
   inverse of 2134 is 1243 and inverse of 24153 is 24153    
4. Take as input number "n", assume that the number will follow constraints.
5. Print it's inverse.
------------------------------------------------------------------
INPUT FORMAT
--------------------------------------------
"n" where n is any integer, following constraints defined above.
------------------------------------------------------------------
OUTPUT FORMAT
--------------------------------------------
"i", the inverted number
------------------------------------------------------------------
CCONSTRAINTS
--------------------------------------------
1 <= n < 10^8, and follwing other constraints defined above.
------------------------------------------------------------------
LOGIC FOR SOLVING
--------------------------------------------
1. Find the digits of the number and their position and then 
   interchange the value and position.
2. Create the inverse number.
------------------------------------------------------------------
COMPLEXITY
--------------------------------------------
Time: There are two loops. So, the time complexity is complexity of 
      these two individual loops. 2*O(length of input).
Space:
------------------------------------------------------------------
COMMENTS:
1. During initialization of any variable initialize it with 0
   Becuase during initialization it contains arbitary random value.
--------------------------------------------
------------------------------------------------------------------
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, r, q, idx=0, temp=0, i=0;
    int d[8];
    cout << "Enter the number you want to inverse: ";
    cin >> n;
    q=n;
    do
    {
        r=q%10;
        d[idx]=r;
        idx++;
        q=q/10;
    } while(q!=0);
    // Interchnage the value of digits with their position
    for(int j=1; j<=idx; j++)
    {
        temp=d[j-1];
        //cout << temp << " ";
        i=i+((j*(pow(10, temp-1))));
    }
    cout << "The inverse number is: " << i <<"\n";
    return 0;
}

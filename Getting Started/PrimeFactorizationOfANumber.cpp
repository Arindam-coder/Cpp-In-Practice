/*
Pepcoding DSA Lavel 1- Problem 12: Prime Factorization Of A Number
-------------------------------------------------------
created by: ARINDAM MAJEE
date & time: 9:20 AM Feb 2 2022
----------------------------------------------------------
QUESTION
-------------------------------
1. You are required to display the prime factorization of a number.
2. Take as input a number n.
3. Print all its prime factors from smallest to largest.
--------------------------------------------------------------
INPUT FORMAT
-------------------------------
n, an integer
--------------------------------------------------------------
OUTPUT FORMAT
-------------------------------
p1  p2  p3  p4.. all prime factors of n
--------------------------------------------------------------
CONSTRAINTS
-------------------------------
2 <= n < 10 ^ 9
--------------------------------------------------------------
SAMPLE
-------------------------------
Input: 1440
Output: 2 2 2 2 2 3 3 5
--------------------------------------------------------------
LOGIC FOR SOLVING
-------------------------------
1. The minimum value of a prime factor is 2. So, divide the number by 
   2 untill it becomes odd. 
2. As it becomes odd, divide the number by odd integers like 3, 5 etc.
   This loop will run til sqrt(n) because there is a property of composite
   numbers in number theory stated as Every composite number has at least 
   one prime factor less than or equal to the square root of itself. 
   If the number is prime then print the number itself.
3. Print the primefactors.
--------------------------------------------------------------
COMPLEXITY
-------------------------------
Time: O(log2(n)+sqrt(n)*log3(n)) = O(sqrt(n)*log(n))
Space: O(1)
--------------------------------------------------------------
COMMENTS
-------------------------------
For more about prime factorization visit:
 https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/
--------------------------------------------------------------
*/

#include<iostream>
#include<cmath>
using namespace std;

void PrimeFactors(int num)
{
    // Print the number of 2s that divides n
    while (num%2==0)
    {
        cout << 2 << " ";
        num=num/2;
    }
    // At this point num is odd. So skip the multiple of 2s in the for loop
    for(int i=3; i<sqrt(num); i=i+2)
    {
        while (num%i==0)
        {
            cout << i << " ";
            num=num/i;
        }
    }

    // This is for handling the case of prime numbers
    if(num >2) cout << num << endl;
}

// Driver Function
int main()
{
    int n, q=0;
    cout << "Enter the number for prime factorization: ";
    cin >> n;
    // Calling the function for prime factorization;
    cout << "The prime factors are: ";
    PrimeFactors(n);
    cout << endl;
    return 0;
}
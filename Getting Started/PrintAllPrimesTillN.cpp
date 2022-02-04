/*
Pepcoding DSA Level-1 Problem - 4: Print All Primes Till N

---------------------------------------------------------
QUESTION
---------------------------------------------------------
1. You've to print all prime numbers between a range. 
2. Take as input "low", the lower limit of range.
3. Take as input "high", the higher limit of range.
4. For the range print all the primes numbers between low and high (both included).
---------------------------------------------------------
Input Format
-------------------
low 
high
Output Format
-------------------
n1
n2
.. all primes between low and high (both included)
---------------------------------------------------------
LOGIC
---------------------------------------------------------
1. Take the both input
2. Crate a function which determines if a number is prime or not.
3. Print all the prime numbers.
--------------------------------------
*/

#include<iostream>
using namespace std;

bool isPrime(int n)
{
    //corner case
    if(n <=1) return false;

    //check 2 to n/2
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
// Time complexity of the above function is O(n/2) or simply O(n)

// A optimized school method based C++ program to check
// if a number is prime
// Refer Here: https://www.geeksforgeeks.org/primality-test-set-1-introduction-and-school-method/

bool isPrimeOpt(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

//main function
int main()
{
    int low, high;
    cin >> low;
    cin >> high;
    cout << "The list of Prime numbers are: ";
    for(int i=low; i<=high; i++)
    {
        if(isPrime(i)==1) cout << i << " ";
    }
    cout << "\n";
    return 0;
}

/*
The increment expression in a for loop need not always alter the loop control variable by a fixed
amount. Instead, the loop control variable can change in any arbitrary way. Using this concept, write
a program that uses a for loop to generate and display the progression 1, 2, 4, 8, 16, 32, and so on.
*/

#include<iostream>
using namespace std;

int main()
{
    int n, a;
    cout << "Enter the upper limit of the loop: ";
    cin >> n;
    cout << "\n";
    for (a=1; a<n; a=a*2)
    {
        cout << a << " ";

    }
    cout << "\n";

    return 0;
}

/*
Array Initialization during runtime
*/
#include<iostream>
using namespace std;

int main()
{
    int a[50];
    int size, i;
    cout << "Enter the array size: ";
    cin >> size;
    cout << "Enter your array elements: ";
    for(i=0; i<size; i++)
    {
        cin >> a[i];
    }
    cout << "\nHere is your array: ";
    for(i=0; i<size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;

}

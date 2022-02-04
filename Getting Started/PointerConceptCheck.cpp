#include<iostream>
using namespace std;

int main()
{
    double x,y;
    int *p;

    x=122.1;
    p=(int *)&x;
    y= *p;
    cout << "The value of x is " << x << "(by variable)\n";
    cout << "The value of x is " << y << "(by pointer)\n";
    return 0;
}

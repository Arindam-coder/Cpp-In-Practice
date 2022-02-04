/*
Project 2
This program generates a table of feet to meters.
*/

#include<iostream>
using namespace std;

int main(){
    double f,m;
    for(f=1.0;f<=20.0;f++){
        m = f/3.28;
        cout << f << " Foot is equal to " << m << "meters.\n";
    }
    return 0;
}

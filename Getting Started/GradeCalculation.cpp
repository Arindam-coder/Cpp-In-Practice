/*
Peepcoding DSA Level 1
Problem 2: Grading calculation
1. You are given as input marks of a student.
2. Display an appropriate message based on the following rules:
  	  2.1 for marks above 90, print excellent.
  	  2.2 for marks above 80 and less than equal to 90, print good.
  	  2.3 for marks above 70 and less than equal to 80, print fair.
  	  2.4 for marks above 60 and less than equal to 70, print meets expectations.
  	  2.5 for marks less than equal to 60, print below par.

Note -> Only change the code in area after - // code here
*/

#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;
    
    //write your code here
    if(90<marks && marks<100){
        cout << "excellent.";
    }
    else if(80<marks && marks<90){
        cout <<"good";
    }
    else if(70<marks && marks<80){
        cout <<"fair";
    }
    else if(60<marks && marks<70){
        cout <<"meets exceptions";
    }
    else if(0<marks && marks<60){
        cout <<"below";
    }
    else{
        cout << "You have inserted invaild input";
    }
    cout << "\n";
    
}

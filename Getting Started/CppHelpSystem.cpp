/*
Project 3-1. (C++: A beginner's Guide)
A simple help system. 
*/

#include<iostream>
using namespace std;

int main(){
    cout << "Help on:\n" << " 1. if.\n" << " 2.switch.\n";
    int choice;
    do {
        cout << "Help on:\n";
        cout << " 1. if\n";
        cout << " 2. switch\n";
        cout << " 3. for\n";
        cout << " 4. while\n";
        cout << " 5. do while\n";
        cout << "Choose one.\n";

        cin >> choice;
    } while (choice < 1 || choice > 5);
    
    
    switch (choice){
        case 1:
            cout << "if(condition) statement\n";
            cout << "else statement\n";


            break;
        case 2:
            cout << "switch(expression)\n";
            cout << "       case 1:\n";
            cout << "             statement\n";
            cout << "             break\n";
            cout << "       case 2:\n";
            cout << "             statement\n";
            cout << "             break\n";
            cout << "       default\n";
            cout << "             statement\n";
            break;
        case 3:
            cout << "for(initilization; condition; increment){\n";
            cout << "     statement\n";
            cout << "      }\n";
            break;
        case 4:
            cout << "while(condition){\n";
            cout << "      statement\n";
            cout << "      }\n";
            break;
        case 5:
            cout << "do{statement} while(condition);\n";
    }
    return 0;
}

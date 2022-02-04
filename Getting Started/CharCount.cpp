/*
Write a program that reads characters from the keyboard until a $ is typed. Have the 
program count the number of periods. Report the total at the end of the program.
*/

#include<iostream>

using namespace std;
int main()
{
  char c;
  int count=0;
  
  do
  {
      cout << "Enter a character from the keyboard. ";
      cin >> c;  
      cout << '\n';  
      count=count+1;
  } while (c!='$');
  cout << "You have entered total " << count << " characters including '$' sign.\n";
  
  return 0;

}

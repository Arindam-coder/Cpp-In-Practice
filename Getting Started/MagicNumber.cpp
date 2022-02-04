#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
  int magic, guess;
  magic = rand();
  cout << "Enter your guess: ";
  cin >> guess;
  if(magic==guess) cout << "\nYou are right";
  else cout << "\nYour guess in wrong! Oringinal magic number is: " << magic << "\n";
  
  return 0;
}

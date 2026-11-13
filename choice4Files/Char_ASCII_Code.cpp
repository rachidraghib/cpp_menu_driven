// Rachid Raghib
#include <iostream>
using namespace std;

int main() {
  char C;
  cout << "Enter any character from the keyboard please !\n\n";cin>>C;
  cout<<"\nThe ASCII code of the character "<<C<<" is "<<static_cast<int>(C)<<endl;;

  return 0;
}
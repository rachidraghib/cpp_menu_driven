// Rachid Raghib
// write a program that accepts three numbers from the user and prints average,
// maximum and minimum on the screen. 
#include <iostream>
using namespace std;
double a,b,c;
 

int main() {
  cout<<"\nEnter three different numbers to display the sum of the numbers, the max and the min values\n";
  cout << "\nEnter number 1 ";cin>>a;
  cout << "\nEnter number 2 ";cin>>b;
  cout << "\nEnter number 3 ";cin>>c;
  cout<<"\n\nthe sum of three numbers is  "<<a+b+c;

  if (b>a && b<c)
  {
  cout<<"\n\nThe MAX number of the three is "<<c;
    cout << "\n\nThe MIN number of the three is "<<a;cout<<endl;
  }
///////////////////////////////////////////////
  else if (b>c && b<a )
  {
    cout<<"\n\nThe MAX number of the three is "<<a;
    cout << "\n\nThe MIN number of the three is "<<c;cout<<endl;
    }
/////////////////////////////////////////////////
  else if (a>b && a<c)
    {
        cout<<"\n\nThe MAX number of the three is "<<c;
        cout << "\n\nThe MIN number of the three is "<<b;cout<<endl;
        
        }
//////////////////////////////////////////////////////   
  else if (a>c && a<b)
        {
        cout<<"\n\nThe MAX number of the three is "<<b;
        cout << "\n\nThe MIN number of the three is "<<c;cout<<endl;
        }
 ////////////////////////////////////////////////////////       
  else if (c>a && c<b )
        {
          cout<<"\n\nThe MAX number of the three is "<<b;
          cout << "\n\nThe MIN number of the three is "<<a;cout<<endl;
          }
///////////////////////////////////////////////////////////
  else if (c>b && c<a)
          {
 
              cout<<"\n\nThe MAX number of the three is "<<a;
              cout << "\n\nThe MIN number of the three is "<<b;cout<<endl;
              
              }
  else {
  cout<<"\n\n Sorry ! the numbers must be different\n";
  }            
  return 0;
}

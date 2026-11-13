// Rachid Raghib
#include <iostream>
using namespace std;
bool Case;
int a,b;

int main() 
{
  cout<<"\nEnter a and b.\nif either one of them is 20 or the sum of them is 20 the case is true \nif not the case is false\n"<<endl;
  cout<<"\nEnter a ";cin>>a;
  cout<<"\nEnter b ";cin>>b;
  a==20 || b==20 || a+b==20 ? Case=true :Case=false;
  
  cout<<"\n0 for false  1 for true \n"<<"Your case is "<<Case;cout<<endl;



}

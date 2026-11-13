#include <iostream>
using namespace std;

int main()

{
  
int integer,sum=0; long factorial=1;
  cout<<"\nEnter an integer n to get the cumulative factorial (1!+2!+3!+...n!) : ";cin>>integer;
  if (integer<1)
  {
  
   cout<<"\nError: integer must be greater than or equal to 1. will you try again ! ";cin>>integer;
  }
   
  for (int i=1; i<=integer;++i)
    {factorial=factorial*i;
     sum=sum+factorial;}
    cout<<"\nThe cumulative factorial of "<<integer<<" is "<<sum<<endl;
   return 0;
  }

// Rachid Raghib
// this program to print sum of two numbers using variables 

#include <iostream>
using namespace std;

int main ()
{
int integer; long factorial=1;
  cout<<"\nEnter any integer to get the factorial : ";cin>>integer;
  while (integer<=0)
  {
   cout<<"\nError: integer must be greater than 0 ";cin>>integer;
  }
  
   for (int i=1; i<=integer;++i)
   {
    factorial=factorial*i;
   }
   cout<<"\nThe factorial of "<<integer
       <<" is "<<factorial<<endl;
   cout<<"\nEnd of the grogram\n";


return 0;
}
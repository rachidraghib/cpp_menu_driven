#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int n)
{
    if (n<=1)
    {
    return 1;
    }
    else
    {
     return n*factorial(n-1);
    }
    
}


int main() 
{
    int n;
    cout<<("\n Enter the number for factorial ");cin>>(n);
    cout<<"\nThe factorial of "<<n<<" is "<<(factorial(n));cout<<"\n\n";
   return 0;
}

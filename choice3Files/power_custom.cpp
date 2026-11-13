#include <iostream>
#include <string>
using namespace std;


// Custom function to calculate power for non-negative integer exponents
int Power(int base, int exponent) 
{
    int result = 1;
    for (int i = 0; i < exponent; ++i) 
    {
        result *= base;
    }
    return result;
}

int main() 
{
    int n,base,exponent;
   
    
    cout<<("\nEnter the base ");cin>>(base);
    cout<<("\nEnter the exponent ");cin>>(exponent);
    
    int result = Power(base, exponent);

    cout<<(base)<<( " raised to the power of ");
    cout<<( exponent)<<(" equals ");
    cout<<(result)<<("\n");
    
    
    return 0;
}

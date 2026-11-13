// C++ program to find the LCM of two
// numbers using the if statement and
// while loop
#include <iostream>
#include <cmath>
using namespace std;

// Driver code
int main()
{
	int  n = 5; // Number of rows for the pattern

for (int i = 1; i <= n; i++) 

{  
for (int j = 1; j <= i;j++) 
{ 

cout << j; // Print numbers in sequence
}
cout << endl; // Move to the next line after each row
}
   	
    return 0;
}
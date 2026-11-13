#include <iostream>
using namespace std;
int main()
{
    // Declare the variables
    int i, j; bool flag;



    // Print display message
    cout << "\nPrime numbers between " << 1<< " and " << 100
         << " are: "<<endl;

    // Traverse each number in the interval
    // with the help of for loop
    for (i = 1; i <= 100; i++) 
    {
        // Skip  1 as it is  
        // neither prime nor composite
        if (i == 1 )
            continue;

        // flag variable to tell
        // if i is prime or not
        flag = 1;

        for (j = 2; j <= i / 2; ++j) 
        {
            if (i % j == 0) 
            {
                flag = 0;
                break;
            }
        }

        // flag = 1 means i is prime
        // and flag = 0 means i is not prime
        if (flag == 1)
            cout << i << " \n";
    }

    return 0;
}
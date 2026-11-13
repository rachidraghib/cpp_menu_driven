// Rachid Raghib
// this code to print Welcome text on a separate line

#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()
#include <iomanip>

using namespace std;

int main ()
{


// Seed the random number generator with the current time
             srand(time(0));
             
            // Generate and print three random numbers
            int sum=0,random_num;
            cout<<" \nGenerating 10 numbers from 1 to 100\n";

            for (int i = 1; i <=10; i++) 
            {
              random_num=rand()%100+1;
              sum+=random_num;
              cout << endl<<"Number "<<setw(2)<<i<<setw(25)<<random_num<<" ";
            
            
            
            }
            cout<<"\nThe sum of all the random numbers is : "<<setw(5)<<sum<<endl;
  
  cout<<" \n\nPress enter key to continue...";
  cin.ignore();

return 0;
}
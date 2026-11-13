#include <iostream>
using namespace std;

int main ()
{
cout<<"Hello World\n";

int k, t = 0, j = 1;
  cout << "\nEnter 3 integers and wait for the display";

  while (j >= 1 && j <= 3) 
  {
    cout << "\nEnter number " << j << " ";
    cin >> k;
    if (k < 0 || k > 100) 
    {
      cout << "     *****Invalid Entry ! Please enter a number from 0 to 100 "
              "range !*****\n";
      j = 0;
    } 
    else 
    {
      if (k > 50 && k <= 100) 
      {
        t = t + 1;
      }
    }
    j = j + 1;
  }
  cout << "\n"
       << t << " times that you entered a number that is greater than 50"
       << endl;
return 0;
}
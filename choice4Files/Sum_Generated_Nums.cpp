#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()
#include <iomanip>
using namespace std;
int S=0,random_Num,n;
int main() 
{
    cout << "\n\033[33;44m\nHello World\033[0m\n";
	cout<<"\nHow many random numbers would like in [1,100] range ";
	cin>>n;
  // Seed the random number generator with the current time
srand(time(0));
// Generate and print three random numbers
cout<<" \nGenerating "<<n<<" numbers from 1 to 100\n";

for (int i = 1; i <= n; i++) 
{
  random_Num=rand()%100+1;
  cout << endl<<"Number "<<i<<setw(10)<<random_Num<<" ";
  S=S+random_Num;
}
cout<<endl<<"\nThe sum of the random numbers is "<<S<<endl;
   
}
// Rachid Raghib
// Accept speed in kilometer per hour,convert the input into mile per hour and display the result 
#include <iostream>
using namespace std;
double speed;
int main() {
  cout << "\nEnter your speed in km/h ";cin>>speed;
speed=(speed/1.069);
cout<<"your speed is "<<speed<<" mile per hour\n";
  return 0;
}

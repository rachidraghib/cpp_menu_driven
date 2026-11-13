/* 
Rachid Raghib

ANSI Color Codes for cross-platform
Text       :Black=30;Red=31;Green=32;Yellow=33;Blue=34;Magenta=35;Cyan=36;White=37
Background :Black=40;Red=41;Green=42;Yellow=43;Blue=44;Magenta=45;Cyan=46;White=47*/

#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()
#include <iomanip>
using namespace std;

int main() 
{
	

  cout << "\n\033[47;30m\nHello World\033[0m\n"; // 
  double a;
  string name;
  cout<<"\nEnter your full name: ";getline(cin,name);
  cout<<"Your full name is : "<<name;
  cout<<" \n\nPress any key to continue...";
  cin.ignore();
  
  
  cout<<"\nEnter a number ";cin>>a;
  
  cout<<"\nmanipulator showpoint prints out    "<<showpoint<<a<<endl;
  cout<<"manipulator showpos prints out        "<<showpos<<a<<endl;
  cout<<"fixed and precise to 2 decimal points "<<fixed<<setprecision(2)<<a<<endl;
  cout <<"Scientific:                           " << scientific << a << endl;


   return 0;
}

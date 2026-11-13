#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    cout<<"\033[30;43mHello World\033[0m\n";

float number1,number2,number3;
cout<<setw(10)<<" \033[33;44m\nDisplaying numbers in ascending order (small to large)\033[0m\n";
    cout<<"\nEnter 3 numbers \n";
    cout<<"Number 1: ";cin>>number1;
    cout<<"Number 2: ";cin>>number2;
    cout<<"Number 3: ";cin>>number3;
    if (number2>=number1 && number2<=number3)
    cout<<"\nThe ascending order of the 3 numbers is as follows\n"
    <<number1<<endl
    <<number2<<endl
    <<number3<<endl;
    else if (number2>=number3 && number2<=number1)
    cout<<"\nThe ascending order of the 3 numbers is as follows \n"
    <<number3<<endl
    <<number2<<endl
    <<number1<<endl;
    
    else if (number3>=number1 && number3<=number2)
    cout<<"/nThe ascending order of the 3 numbers is as follows \n"
    <<number1<<endl
    <<number3<<endl
    <<number2<<endl;
    else if (number3>=number2 && number3<=number1)
    cout<<"/nThe ascending order of the 3 numbers is as follows \n"
    <<number2<<endl
    <<number3<<endl
    <<number1<<endl;

    else if (number1>=number2 && number1<=number3)
    cout<<"\nThe ascending order of the 3 numbers is as follows \n"
    <<number2<<endl
    <<number1<<endl
    <<number3<<endl;
    else 
    cout<<"\nThe ascending order of the 3 numbers is as follows\n"
    <<number3<<endl
    <<number1<<endl
    <<number2<<endl;

return 0;
}

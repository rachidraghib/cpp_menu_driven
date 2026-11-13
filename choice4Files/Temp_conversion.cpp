#include <iostream>
using namespace std;
int main()
{
double c,f,F,C;
	cout<<"\nEnter the temperature in Celsius ";cin>>C;
	F=((9*C)/5)+32;
	cout<<"\nThe equivalent of "
	<<C<<" degrees in Celsius is \n"
	<<F<<" degrees in Fahrenheit"<<endl;

    cout<<"\nNow enter the temperature in Fahranheit ";cin>>f;
	c=(5*(f-32))/9;
	cout<<"\nThe equivalent of "
	<<f<<" degrees in Fahranheit is \n"
	<<c<<" degrees in Celsius"<<endl;
    return 0;
}    
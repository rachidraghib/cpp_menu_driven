// This Program will try to solve a quadratic equation
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	cout << "\n\t\t \033[33;44mMASTERED QUADRATIC EQUATION SOLUTIONS.\033[0m\n\n\n\n";
	cout<< " \nPlease enter the values a,b and c for the quadratic equation ax^2+bx+c=0\n\n\n";

	int a,b,c;
	cout<<"Enter the leading coefficient a= ";cin >>a;
	if (a == 0)
	{
		cout <<"/nInvalid Quadratic Equation!!!\n";
	do
	{
    cout<<"\nPlease try again ! "<<"Enter the leading coefficient a= ";cin >>a;
	}
	while (a==0);


	}
	else if (a!=0);
	{
		cout << "Enter the value of      b= "; cin >> b;
		cout << "Enter the value of      c= "; cin >> c;
	}
	float d = pow(b ,2) - 4 * a * c;
	double sqrt_val = sqrt(abs(d));
	if (d > 0)
	{
		cout << "\nRoots are real and different. \n"
		     << "x1="
		     <<fixed<<setprecision(2)<<(double)(-b + sqrt_val) / (2 * a)
		     << "\nx2="
		     <<fixed<<setprecision(2)<< (double)(-b - sqrt_val) / (2 * a)<<"\n"<<endl;
	}
	else if (d == 0)
	{
		cout << "Roots are real and same \n"
		     << "x="
		     <<fixed<<setprecision(2) << -(double)b / (2 * a)
		     <<endl;
	}
	else // when d<0
	{
		cout << " \nRoots are complex. \n"
		     << "x1="
		     <<fixed<<setprecision(2)<<double( - (double)b / (2 * a)) << "+" << double((double)sqrt_val / (2 * a)) << "i"
		     << "\nx2="
		     <<fixed<<setprecision(2)<<double( - (double)b / (2 * a)) << "-" << double((double)sqrt_val / (2 * a))
		     << "i" << endl << endl;
	}




	
	return 0;

}

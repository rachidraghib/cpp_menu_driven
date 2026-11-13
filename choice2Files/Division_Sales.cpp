#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
const int QTR=4,DIV=2;
double sales[DIV][QTR];

double sum=0.0;
double average;
double total_sales=0.0;


cout<<"\nThis program will calculate the total sales of \nall company's divisions."
    <<"\nEnter the follwing sales data:\n";
      for (int i=0;i<DIV;i++){
      cout<<"\nDivision: "<<i+1<<":\n";
      for(int j=0;j<QTR;j++){
     cout<<"\nQuarter "<<j+1<<": ";
     cout<<"Enter the sales: ";cin>>sales[i][j];
total_sales+=sales[i][j];
      }
      cout<<"\n";
    }

    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\nTotal  Division Sales: "<<endl;
   
    cout<<"\nTotal sales are : $ "<<total_sales<<endl;



   return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

const int SIZE1=6;
double sum=0.0;
double average;

cout<<"\n\nStudent Grades \n";
double tests[SIZE1]={100.,92.0,86.5,85.0,91.5,99.0};

for (int i=0;i<6;i++){
   cout<<tests[i]<<" ";
    sum=sum+tests[i];
}

cout<<"\n\nTotal Grades are "<<sum<<endl;
average=sum/SIZE1;
cout<<"\nAverage grades is "<<setprecision(2)<<fixed<<average<<endl<<endl;

return 0;
}

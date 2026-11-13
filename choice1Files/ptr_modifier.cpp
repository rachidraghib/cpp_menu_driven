#include <iostream>
#include <iomanip>
using namespace std;
void modifyValue(int*ptr){
    if (ptr!=nullptr)
    cout<<"\nenter the new variable ";cin>>*ptr;
}
    
int main(){
    int number;
    cout<<"\nEnter the original variable please: ";cin>>number;
    cout<<"Original Variable is "<<number<<endl;  
    modifyValue(&number); // modifies the variable at the run time

    cout<<"The new variable is "<<number<<endl;  
}
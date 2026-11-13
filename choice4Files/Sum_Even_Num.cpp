// Rachid Raghib

#include <iostream>
using namespace std;

int main ()
{
cout<<"Hello World\n";
int connect,Pos_Num,sum=0;
    cout<<"Enter a positive number ";cin>>Pos_Num;
    connect=Pos_Num;
    
    while (Pos_Num<0)
    {
        cout<<" Invalid Entry...try again!";
    cout<<"\nEnter a positive number ";cin>>Pos_Num;
    }
    
    while (0<=Pos_Num)
    

   {
    
    if (Pos_Num %2==0) 
    {
        sum=sum+Pos_Num;    
    
    }
    else 
        sum=sum+Pos_Num-1;
    Pos_Num=Pos_Num-2;
  
   }
   cout<<endl<<"The sum of even integers between 0 and the number "<<connect
             <<" you've entered is "<<sum<<endl;

return 0;
}
    
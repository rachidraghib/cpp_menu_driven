

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


//****************************************************************************************** 
int linearSearch(int array[],int size,int value){

    int index=0;
    int position=-1;
    bool found=false;
    cout<<"\n\nLINEAR SEARCH\n";
    cout<<"\nArray Elements: {100,98,96,97,77,85,89,99,91,88}\n";
    
    
    while (index<size && !found){
        if (array[index]==value){
            found=true;
            position=index;
        }
        index++;
    }
    cout<<"\nthe position of "<<value<<" is  ";
    return position;
}
//****************************************************************************************** 
int binarySearch(int array[], int size,int value){
    int first=0;
    int last=size-1;
    int middle;
    int position=-1;
    bool found=false;
    cout<<"\nBINARY SEARCH\n";
    
    
    while (first<=last && !found){
        middle=(first+last)/2;
        if (array[middle]==value){
            found=true;
            position=middle;
        }
        else if (array[middle]>value){
            last=middle-1;
        }
        else{
            first=middle+1;
        }
        
    }
    cout<<"the position of "<<value<<" is ";
    return position;
}
////////////////////////////////////////////////////////////////////////////////////
int main()   
{
   int value;
   double min,max;
   const int SIZE=10; int scores[SIZE]={100,98,96,97,77,85,89,99,91,88};
   cout<<"\nArray Elements: {100,98,96,97,77,85,89,99,91,88}\n";
   cout<<"Enter the value of an element to get its position in array ";cin>>value;
//call binarySearch() function
   cout<<binarySearch(scores,SIZE,value);cout<<"\n";

//call linearSearch() function
  cout<<linearSearch(scores,SIZE,value);
   
   
   
   return 0;
}

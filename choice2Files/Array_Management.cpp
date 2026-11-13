#include <iostream>
#include <iomanip>
using namespace std;

//Output fucntion 

int print_int(int number){
    cout<<number;
    return number;
}

//Input fucntion

int enter_int(int &number){   
    cin>>number; 
    return number;  
}

//Output fucntion

string print_str(string text){
    cout<<text;
    return text;
} 
////////////////////////////////////////////////////////////////////////////////////////////
int main() {

    const int SIZE=5;
    const int size=5;
    int integers[SIZE];

    //Sorting the array
    print_str("\n\nEnter ");print_int(SIZE);print_str(" integers\n\n");
    for (int i=0;i<SIZE;i++){
        print_str("Enter Element ");print_int(i+1);print_str(" ");
        enter_int(integers[i]);
    }

    //Display the array
    print_str("\nThe original array \n");
    for (int i=0;i<SIZE;i++){
    print_str("Element ");print_int(i+1);print_str(" is ");
    print_int(integers[i]);print_str("\n");    
    }

    //Proccess the original array
    for (int i=0;i<SIZE;i++){
    integers[i]=pow(integers[i],3);
    }

    //Display the updated array
    print_str("\nThe updated  array \n");
    for (int i=0;i<SIZE;i++){
    print_str("Element ");print_int(i+1);print_str(" is ");
    print_int(integers[i]);print_str("\n");     
    }
   return 0;
}

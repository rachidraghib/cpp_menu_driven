#include <iostream>
using namespace std;

// function to print a row
void print_char(int num)
{
    // base case
    if (num == 0)
        return;
    cout << "*";

    // recursively calling printn()
    print_char(num - 1);
}

// function to print the pattern
void print_pattern(int n, int i)
{
    // base case
    if (n == 0)
        return;
    print_char(i);
    cout << endl;

    // recursively calling pattern()
    print_pattern(n-1, i +1);
}

int print_line(int n){
    if (n==0) return 0;
    for (int i=n;i>0;i--){
        cout<<"*";
    }
    n-=1;
    cout<<endl;
    return (n);
}
void print_patt(int n){
    if (n==0) return;
    
    print_line(n);
    print_patt(n-1);
    
}

int main()
{
    int n = 5;
    cout<<endl<<endl<<endl;
    print_char(n);
    cout<<endl<<endl<<endl;
    print_line(n);
    cout<<endl<<endl<<endl;
    print_patt(n);
    print_pattern(n, 1);
    return 0;
}
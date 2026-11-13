/*
a function pointer is a type of pointer that stores the address of
 a function, allowing functions to be passed as arguments and 
 invoked dynamically. It is useful in techniques such as callback 
 functions, event-driven programs, and polymorphism 
 (a concept where a function or operator behaves differently based
  on the context).

Let's take a look at an example:
*/
#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int main()
{
 // Declare a function pointer that matches
// the signature of add() function


int (*fptr)(int, int);

// Assign to add()
    fptr = &add;

    // Call the function via ptr
    printf("%d\n", fptr(10, 5));
    cout<<endl<<fptr(20,20)<<endl;


  return 0;
}  
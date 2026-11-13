#include <iostream>
using namespace std;

int main() {
    int number = 42;
    
    // 1. Declare a pointer using * and assign the address of 'number' using &
    int* ptr = &number; 

    cout << "Value of number: " << number <<endl; // Outputs 42
    cout << "Memory address of number (&number): " << &number <<endl; // Outputs address (e.g., 0x6dfed4)
    cout << "Address stored in ptr: " << ptr <<endl;// Same memory address

    // 2. Dereference the pointer using * to read the value it points to
    cout << "Value pointed to by ptr (*ptr): " << *ptr <<endl; // Outputs 42

    // 3. Modify the value of 'number' through the pointer
    *ptr = 100; 
    
    cout << "New value of number after modification: " << number <<endl; // Outputs 100
    
    return 0;
}

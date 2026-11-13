#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int main()
{
    int i, j;
  
    // How many rows are we displaying?
    int rows = 5;
  
    
    // assign the character to print the shape
    char character = '&';
  
    // first for loop is used to identify number rows
    for (i =rows;i>=0; i--) {
            
        // second for loop is used to identify number of columns based on the rows
        for (j = 5; j >i; j--) {
          
            // printing character to get the required shape
            cout << character << " ";
        }
    cout<<"\n";
    }

    
    
    return 0;
}


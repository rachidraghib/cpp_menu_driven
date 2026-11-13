#include <iostream>
using namespace std;

int main() {
    int grades[3] = {85, 92, 78};
    
    // Point to the first element of the array (no '&' required for arrays)
    int* ptr = grades; 

    for (int i = 0; i < 3; ++i) {
        // *(ptr + i) calculates the address offset and dereferences it
        cout << "Element " << i+1 << ": " << *(ptr + i) <<endl;
    }
    
    return 0;
}

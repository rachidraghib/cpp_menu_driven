/*
In C++, smart pointers are wrapper classes around raw pointers that automate memory management. They are available in the <memory> header and ensure that dynamically allocated memory is automatically freed when the pointer goes out of scope, preventing memory leaks and dangling pointers.

*/

/*

1. std::unique_ptr (Exclusive Ownership)

A unique_ptr solely owns the resource it points to. It cannot be copied, only moved, ensuring that exactly one pointer manages the lifecycle of the object.

*/


#include <iostream>
#include <memory> // Required for smart pointers
using namespace std;
class Player {
public:
    Player() { cout << "Player created\n"; }
    ~Player() { cout << "Player destroyed\n"; }
    void play() { cout << "Playing game!\n"; }
};

int main() {
    // 1. Creation using make_unique (Recommended & safe)
    unique_ptr<Player> p1 = make_unique<Player>();
    p1->play(); // Access via standard -> operator
    
    // 2. unique_ptr CANNOT be copied
    // unique_ptr<Player> p2 = p1; // Compile Error!

    // 3. Ownership can be transferred using move
    unique_ptr<Player> p2 = move(p1); 
    
    if (!p1) {
        cout << "p1 is now null.\n";
    }
    
    cout << "Exiting main...\n";
    return 0; 
    // p2 goes out of scope here: "Player destroyed" is automatically printed.
}

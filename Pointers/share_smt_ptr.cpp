/*
2. std::shared_ptr (Shared Ownership)

A shared_ptr keeps track of how many pointers reference the same object using a reference counter. The managed object is deleted only when the last shared_ptr pointing to it is destroyed.
*/



#include <iostream>
#include <memory>
using namespace std;
class Widget {
public:
    Widget() { cout << "Widget created\n"; }
    ~Widget() { cout << "Widget destroyed\n"; }
};


int main() {
    // 1. Create a shared pointer (Reference count = 1)
    shared_ptr<Widget> w1 = std::make_shared<Widget>();
    cout << "Reference count: " << w1.use_count() << "\n"; // Prints 1

    {
        // 2. Copy the shared pointer (Reference count = 2)
        shared_ptr<Widget> w2 = w1;
        cout << "Reference count inside scope: " << w1.use_count() << "\n"; // Prints 2
    } // w2 goes out of scope here

    // Reference count drops back down to 1
    cout << "Reference count outside scope: " << w1.use_count() << "\n"; // Prints 1

    cout << "Exiting main...\n";
    return 0;
    // w1 goes out of scope here: count hits 0, "Widget destroyed" is called.
}

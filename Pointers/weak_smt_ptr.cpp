/*

3. std::weak_ptr (Non-owning Observer)

A weak_ptr holds a non-owning reference to an object managed by a shared_ptr. It does not increase the reference count. To access the underlying object, you must temporarily convert it back into a shared_ptr using the .lock() method.
*/


#include <iostream>
#include <memory>
using namespace std;

class Resource {
public:
    void do_work() { cout << "Processing resource...\n"; }
};

int main() {
    weak_ptr<Resource> weakObserver;

    {
        shared_ptr<Resource> sharedRes = std::make_shared<Resource>();
        weakObserver = sharedRes; // Point to the shared resource

        // Check if resource is still alive and access it
        if (shared_ptr<Resource> tempShared = weakObserver.lock()) {
            tempShared->do_work();
            cout << "Resource use count: " << tempShared.use_count() << "\n"; // Prints 2
        }
    } // sharedRes goes out of scope here, destroying the Resource object

    // Try to access it again after destruction
    if (weakObserver.expired()) {
        cout << "The resource has been destroyed. Cannot access.\n";
    }

    return 0;
}

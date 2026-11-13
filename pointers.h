#include<iostream>


using namespace std;
void pause(){
cout<<"\n\nPress enter to continue...";cin.ignore(250,'\n');cin.get();

}





void case1(){
                        int values[]={10,20,30,40,50};
                        int *valuesPtr=values;

                        cout<<"\nint values[]={10,20,30,40,50};";
                        cout<<"\nint *valuesPtr=values;\ncout<<values;\n";
                        cout<<"\nPrints the memory address where element 1 is stored\n";
                        cout<<values;
                        pause();
                        cout<<"int values[]={10,20,30,40,50};\n";
                        cout<<"\nint *valuesPtr=values;\ncout<<*valuesPtr;";                     
                        cout<<"\nPrints the value of element 1\n";
        
                        cout<<*valuesPtr;
                        pause();
                        cout<<"int values[]={10,20,30,40,50};\n";
                        cout<<"\ncout<<*values;\n";
                        cout<<"\nPrints the value of element 1\n";
                        cout<<*values;
                        pause();
                        cout<<"int values[]={10,20,30,40,50};\n";
                        cout<<"\ncout<<values[0]\n";
                        cout<<"\nPrints the value of element 1\n";
                        cout<<values[0];
                        pause();
                       cout<<"int values[]={10,20,30,40,50};\n";
                       cout<<"int *ptr=nullptr;\n"<<"int *ptr=nullptr;\n"<<"int *ptr=nullptr;\n";
                       cout<<"for(int i=0;i<size;i++){"<<endl;
                       cout<<"cout<<'element '<<i+1<<<<*ptr<<" ";"<<endl;
                       cout<<"ptr++;"<<endl;
        
                       cout<<"for(int i=0;i<size;i++){"<<endl;
                       cout<<"cout<<'element '<<size-i<<<<*(ptr-1)<<" ";"<<endl;
                       cout<<"ptr--;"<<endl;
        

                      int *ptr=nullptr;
                      ptr=values;
                      const  int size=sizeof(values)/4;

                      for(int i=0;i<size;i++){
                      cout<<"\nelement "<<i+1<<":\n"<<*ptr<<" ";
                      ptr++;
                      }


                     for(int i=0;i<size;i++){
                     cout<<"\nelement "<<size-i<<":\n"<<*(ptr-1)<<" ";
                      ptr--;
                      }
                      pause();
                      cout<<"int *valuesPtr=values;";
                      cout<<"cout<<*(valuesPtr+=4);";
        
                      cout<<*(valuesPtr+=4);
                      pause();
                     cout<<"int values[]={10,20,30,40,50};\n";
                     cout<<"int *valuesPtr=values;\ncout<<*++valuesPtr;";
                     cout<<*++valuesPtr;
                      pause();
                       


}

void array_Ptr(){

   int grades[3] = {85, 92, 78};
    
    // Point to the first element of the array (no '&' required for arrays)
    int* ptr = grades; 

    for (int i = 0; i < 3; ++i) {
    // *(ptr + i) calculates the address offset and dereferences it
    cout << "Element " << i+1 << ": " << *(ptr + i) <<endl;
    }
    

}


void case4(){
                            class Player {
                            public:
                            Player() { cout << "Player created\n"; }
                            ~Player() { cout << "Player destroyed\n"; }
                            void play() { cout << "Playing game!\n"; }
                           };
                             // 1. Creation using std::make_unique (Recommended & safe)
                             unique_ptr<Player> p1 = make_unique<Player>();
                             p1->play(); // Access via standard -> operator
    
                             // 2. unique_ptr CANNOT be copied
                             // unique_ptr<Player> p2 = p1; // Compile Error!

                            // 3. Ownership can be transferred using move
                            unique_ptr<Player> p2 = std::move(p1); 
    
                            if (!p1) {
                            cout << "p1 is now null.\n";
                            }
    
                            cout << "Exiting main...\n";

}

class Widget {
public:
    Widget() { cout << "Widget created\n"; }
    ~Widget() { cout << "Widget destroyed\n"; }
};

void case5(){
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
    
    // w1 goes out of scope here: count hits 0, "Widget destroyed" is called.

}
class Resource {
public:
    void do_work() { cout << "Processing resource...\n"; }
};

void case6(){
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


}
void case7(){
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
    
}
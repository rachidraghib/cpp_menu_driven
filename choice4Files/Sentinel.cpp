//------------------SENTINEL CONTROLLED WHILE LOOPS----------------------


#include <iostream>

using namespace std;

int main()

{
    cout << "Hello world! we are calculating the average age of people " << endl;
    int age;
    int total=0;
    int ppl=0;
    cout<<"Enter the first age or type -1 to exit\n";
    cin>>age;
    while (age!=-1)
        {
        total=total+age;
        ppl++;
        cout<<"Enter the next age or type -1 for results and to exit\n";
        cin>>age;
        }
        cout<<"Number of people entered "<<ppl;
        cout<<"\nTotal of ages "<<total;
        if(ppl==0)
            cout<<"\nAverage Undefined"<<endl;
        else
        cout<<"\nAverage age "<<total/ppl;


}

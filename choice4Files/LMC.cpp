
#include <iostream>
using namespace std;


int main()
{
    int a , b , max, flag = 1;
    cout<<" \nEnter integer 1  ";cin>>a;
    cout<<" \nEnter integer 2  ";cin>>b;

    // Use ternary operator to get the large number
    max = (a > b) ? a : b;

    while (flag) {
        // if statement checks max_num is completely
        // divisible by n1 and n2.
        if (max % a == 0 && max % b == 0) {
            cout << "LCM of " << a << " and " << b << " is "
                 << max;
            break;
        }

        // update by 1 on each iteration
        max++;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main ()
{
    string userName;
    string userPassword;
    int loginAttempt = 0;

    while (loginAttempt < 5)
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;

        if (userName == "rachid" && userPassword == "raghib")
        {
            cout << "Welcome Rachid!\n";
            break;
        }
        else if (userName == "adam" && userPassword == "raghib")
        {
            cout << "Welcome Adam!\n";
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            
    }

    cout << "Thank you for logging in.\n";
return 0;
}
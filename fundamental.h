#include <iostream>
#include <iomanip>

using namespace std;

void ascend (){


cout<<"\033[30;43mHello World\033[0m\n";

float number1,number2,number3;
cout<<setw(10)<<" \033[33;44m\nDisplaying numbers in ascending order (small to large)\033[0m\n";
    cout<<"\nEnter 3 numbers \n";
    cout<<"Number 1: ";cin>>number1;
    cout<<"Number 2: ";cin>>number2;
    cout<<"Number 3: ";cin>>number3;
    if (number2>=number1 && number2<=number3)
    cout<<"\nThe ascending order of the 3 numbers is as follows\n"
    <<number1<<endl
    <<number2<<endl
    <<number3<<endl;
    else if (number2>=number3 && number2<=number1)
    cout<<"\nThe ascending order of the 3 numbers is as follows \n"
    <<number3<<endl
    <<number2<<endl
    <<number1<<endl;
    
    else if (number3>=number1 && number3<=number2)
    cout<<"/nThe ascending order of the 3 numbers is as follows \n"
    <<number1<<endl
    <<number3<<endl
    <<number2<<endl;
    else if (number3>=number2 && number3<=number1)
    cout<<"/nThe ascending order of the 3 numbers is as follows \n"
    <<number2<<endl
    <<number3<<endl
    <<number1<<endl;

    else if (number1>=number2 && number1<=number3)
    cout<<"\nThe ascending order of the 3 numbers is as follows \n"
    <<number2<<endl
    <<number1<<endl
    <<number3<<endl;
    else 
    cout<<"\nThe ascending order of the 3 numbers is as follows\n"
    <<number3<<endl
    <<number1<<endl
    <<number2<<endl;


}

void formatting(){
    cout << "\n\033[47;30m\nHello World\033[0m\n"; // 
  double a;
  string name;
  cout<<"\nEnter your full name: ";getline(cin,name);
  cout<<"Your full name is : "<<name;
  cout<<" \n\nPress any key to continue...";
  cin.ignore();
  
  
  cout<<"\nEnter a number ";cin>>a;
  
  cout<<"\nmanipulator showpoint prints out    "<<showpoint<<a<<endl;
  cout<<"manipulator showpos prints out        "<<showpos<<a<<endl;
  cout<<"fixed and precise to 2 decimal points "<<fixed<<setprecision(2)<<a<<endl;
  cout <<"Scientific:                           " << scientific << a << endl;


}
void bool_(){

bool Case;
int a,b;



    cout<<"\nEnter a and b.\nif either one of them is 20 or the sum of them is 20 the case is true \nif not the case is false\n"<<endl;
  cout<<"\nEnter a ";cin>>a;
  cout<<"\nEnter b ";cin>>b;
  a==20 || b==20 || a+b==20 ? Case=true :Case=false;
  
  cout<<"\n0 for false  1 for true \n"<<"Your case is "<<Case;cout<<endl;




}

void ascii(){
    char C;
  cout << "Enter any character from the keyboard please !\n\n";cin>>C;
  cout<<"\nThe ASCII code of the character "<<C<<" is "<<static_cast<int>(C)<<endl;;

}

void cumulativeFactorial(){
int integer,sum=0; long factorial=1;
  cout<<"\nEnter an integer n to get the cumulative factorial (1!+2!+3!+...n!) : ";cin>>integer;
  if (integer<1)
  {
  
   cout<<"\nError: integer must be greater than or equal to 1. will you try again ! ";cin>>integer;
  }
   
  for (int i=1; i<=integer;++i)
    {factorial=factorial*i;
     sum=sum+factorial;}
    cout<<"\nThe cumulative factorial of "<<integer<<" is "<<sum<<endl;
   


}
void login(){
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


}

void factorial(){
    int integer; long factorial=1;
  cout<<"\nEnter any integer to get the factorial : ";cin>>integer;
  while (integer<=0)
  {
   cout<<"\nError: integer must be greater than 0 ";cin>>integer;
  }
  
   for (int i=1; i<=integer;++i)
   {
    factorial=factorial*i;
   }
   cout<<"\nThe factorial of "<<integer
       <<" is "<<factorial<<endl;
   cout<<"\nEnd of the grogram\n";

}

void rand_sum(){
    int S=0,random_Num,n;
        cout << "\n\033[33;44m\nHello World\033[0m\n";
	cout<<"\nHow many random numbers would like in [1,100] range ";
	cin>>n;
  // Seed the random number generator with the current time
srand(time(0));
// Generate and print three random numbers
cout<<" \nGenerating "<<n<<" numbers from 1 to 100\n";

for (int i = 1; i <= n; i++) 
{
  random_Num=rand()%100+1;
  cout << endl<<"Number "<<i<<setw(10)<<random_Num<<" ";
  S=S+random_Num;
}
cout<<endl<<"\nThe sum of the random numbers is "<<S<<endl;

}
void rand_(){

    // Seed the random number generator with the current time
             srand(time(0));
             
            // Generate and print three random numbers
            int sum=0,random_num;
            cout<<" \nGenerating 10 numbers from 1 to 100\n";

            for (int i = 1; i <=10; i++) 
            {
              random_num=rand()%100+1;
              sum+=random_num;
              cout << endl<<"Number "<<setw(2)<<i<<setw(25)<<random_num<<" ";
            
            
            
            }
            cout<<"\nThe sum of all the random numbers is : "<<setw(5)<<sum<<endl;
  
  cout<<" \n\nPress enter key to continue...";
  cin.ignore();


}


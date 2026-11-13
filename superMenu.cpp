#include <iostream>
#include <iomanip>
#include <fstream>
#include "menuBoards.h"
#include "restaurant_app.h"
#include "pointers.h"
#include "fundamental.h"


using namespace std;

void outPut(){

cout<<"\nPress enter to run the program for output...";cin.ignore(250,'\n');cin.get();
}







//******************************************** 
int max_val(int x,int y){
    int max;
    x<y? max=y:max=x;
    return max;
}
//****************************************************************************************** 
void MaxMinFuct(int array[],int max,int min,const int SIZE ){
   max=array[0];
   min=array[0];
    for (int i=1;i<SIZE;i++){
         
        if (array[i]>max){
            max=array[i];continue;
        }
        else
        continue;
    }
        for (int i=1;i<SIZE;i++){
        if (array[i]<min){
            min=array[i];continue;
        }
        else
        continue;
    }
    cout<<"\nThe max score is "<<(max);
    cout<<"\nThe min score is "<<(min)<<endl;
}




void modifyValue(int*ptr){
    if (ptr!=nullptr)
    cout<<"\nenter the new variable ";cin>>*ptr;
}

//CASE 2
//**************************************  CASE: 2_9 ************************************************** */
 

//************************************** FUNCTIONS CASE: 2_8 ************************************************** */

void test28(){
    string name;
    double rate, hours, gross, tax, net;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter hourly rate: ";
    cin >> rate;
    cout << "Enter hours worked: ";
    cin >> hours;

    // Gross Pay logic with overtime
    if (hours > 40) {
        gross = (40 * rate) + ((hours - 40) * (rate * 1.5));
    } else {
        gross = hours * rate;
    }

    tax = gross * 0.10; // Example 10% tax rate
    net = gross - tax;

    cout << "\n--- Payroll Slip ---\n";
    cout << "Employee: " << name << "\n";
    cout << "Gross Pay: $" << gross << "\n";
    cout << "Net Pay: $" << net <<endl;

}
//************************************** FUNCTIONS CASE: 2_7 ************************************************** */
void ShowTranspose(const int row,const int col) { 
    
    int matrix[100][100];
    int transpose[100][100];
    cout<<"\n*****Enter the "<<row<<"X"<<col<<" matrix to display the original and the transpose\n";
        for (int i=0; i<row; i++) {
        for (int j=0;j<col;j++){
        
        cout<<"\nEnter a"<<i+1<<j+1<<": ";cin>>matrix[i][j];
		transpose[j][i]=matrix[i][j];
        } 
	}
    cout<<"\nOriginal Matrix\n\n";
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            
        cout<<"  "<<transpose[j][i];
        if (j==col-1){
            cout<<endl<<endl;
        }
    }
    }
    cout<<endl;
    
    cout<<"\nTranspose Matrix \n\n";
    for (int i=0;i<col;i++){
        for(int j=0;j<row;j++){
           
            
               cout<<"  "<<transpose[i][j];
            if (j==row-1){
            cout<<endl<<endl;
            } 
            
        }

    }
     cout<<endl;
    }

void test27(){
   int *integersPtr1=nullptr;
    int *integersPtr2=nullptr;
    
    int rows,cols;

    
 
    cout<<"ROWS : ";cin>>rows;
    cout<<"COLS : ";cin>>cols;
    integersPtr1= new int(rows);
    integersPtr2= new int(cols);

    ShowTranspose(rows,cols);
   
   
    delete[] integersPtr1;
    integersPtr1=nullptr;
    delete[] integersPtr2;
    integersPtr2=nullptr;
    
}

//************************************** FUNCTIONS CASE: 2_6 ************************************************** */
void SortMatrix(const int row,const int col){

int matrix[100][100];
        cout<<"\n*****Enter the "<<row<<"X"<<col<<" matrix for display\n";     
        
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            
        cout<<"\nEnter a"<<i+1<<j+1<<": ";cin>>matrix[i][j];
        
    }
    }
   
    cout<<endl;
    
  
}
void ShowMatrix(int row,int col){
    
int matrix[100][100];
             
        
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cout<<" "<<matrix[i][j];
        if (j==col-1){
            cout<<endl<<endl;
        }
   
    }
    }
    
    cout<<endl;
    
}
void test26(){
   int *integersPtr1=nullptr;
    int *integersPtr2=nullptr;
    
    int rows,cols;

    
 
    cout<<"ROWS : ";cin>>rows;
    cout<<"COLS : ";cin>>cols;
    integersPtr1= new int(rows);
    integersPtr2= new int(cols);

    SortMatrix(rows,cols);
    ShowMatrix(rows,cols);
   
   
    delete[] integersPtr1;
    integersPtr1=nullptr;
    delete[] integersPtr2;
    integersPtr2=nullptr;
    
}

//************************************** FUNCTIONS CASE: 2_5 ************************************************** */
void AddMatrix( int row, int col){
    int B[100][100];
    int A[100][100];
    int sum[100][100];
    //Sorting matrix A 
    cout<<"\nMatrix A elements:\n";
    for (int i=0;i<row;i++){  
        for (int j=0;j<col;j++){  
            cout<<"\nA a"<<i+1<<j+1<<": ";cin>>A[i][j];
        }

    }
     //Sorting matrix B
    cout<<"\nMatrix B elements:\n";
    for (int i=0;i<row;i++){  
        for (int j=0;j<col;j++){  
            cout<<"\nB a"<<i+1<<j+1<<": ";cin>>B[i][j];
        }

    }
    //Display matix A
    cout<<"\nMatrix A :\n\n";
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        
        cout<<" "<<A[i][j];
        if (j==col-1){
            cout<<endl<<endl;
        }
   
    }
    }
    //Display matrix B
    cout<<"\nMatrix B :\n\n";
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        
        cout<<" "<<B[i][j];
        if (j==col-1){
            cout<<endl<<endl;
        }
   
    }
    }
    //Display A+B
    cout<<"\nThe resulting matrix A+B is:\n\n";
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        sum[i][j]=A[i][j]+B[i][j];
        cout<<" "<<sum[i][j];
        if (j==col-1){
            cout<<endl<<endl;
        }
   
    }
    }
    
    cout<<endl;
}

void test25(){
    int *integersPtr1=nullptr;
    int *integersPtr2=nullptr;
    
    int rows,cols;

    
   cout<<"\nSum of Matrices\nEnter the size:\n";
   cout<<"\nnumber of rows: ";cin>>rows;
   cout<<"\nnumber of columns: ";cin>>cols;
    integersPtr1= new int(rows);
    integersPtr2= new int(cols);

   AddMatrix(rows,cols);

   
    delete[] integersPtr1;
    integersPtr1=nullptr;
    delete[] integersPtr2;
    integersPtr2=nullptr;
    
}
//************************************** FUNCTIONS CASE: 2_4 ************************************************** */
int linearSearch(int array[],int size,int value){
    int index=0;
    int position=-1;
    bool found=false;
    while (index<size && !found){
        if (array[index]==value){
            found=true;
            position=index;
        }
        index++;
    }
    return position;
}

int binarySearch(int array[],int size,int value){
    int first=0;
    int last=size-1;
    int middle;
    int position=-1;
    bool found=false;
    while (first<=last && !found){
        middle=(first+last)/2;
        if (array[middle]==value){
            found=true;
            position=middle;
        }
        else if (array[middle]>value){
            last=middle-1;
        }
        else{
            first=middle+1;
        }
    }
    return position;
}

void test24(){
    
   outPut();

   int value;
   double min,max;
   const int SIZE=10; int scores[SIZE]={100,98,96,97,77,85,89,99,91,88};
   cout<<"\nArray Elements: {100,98,96,97,77,85,89,99,91,88}\n";
   cout<<"Enter the value of an element to get its position in array ";cin>>value;
//call binarySearch() function
   cout<<binarySearch(scores,SIZE,value);cout<<"\n";

//call linearSearch() function
  cout<<linearSearch(scores,SIZE,value);
   
}
//************************************** CASE: 2_3 ************************************************** */
void test23(){
const int QTR=4,DIV=2;
double sales[DIV][QTR];
outPut();
double sum=0.0;
double average;
double total_sales=0.0;


cout<<"\nThis program will calculate the total sales of \nall company's divisions."
    <<"\nEnter the follwing sales data:\n";
      for (int i=0;i<DIV;i++){
      cout<<"\nDivision: "<<i+1<<":\n";
      for(int j=0;j<QTR;j++){
     cout<<"\nQuarter "<<j+1<<": ";
     cout<<"Enter the sales: ";cin>>sales[i][j];
total_sales+=sales[i][j];
      }
      cout<<"\n";
    }

    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\nTotal  Division Sales: "<<endl;
   
    cout<<"\nTotal sales are : $ "<<total_sales<<endl;

   }
//************************************** CASE: 2_2 ************************************************** */
void test22(){
const int SIZE1=6;
double sum=0.0;
double average;
outPut();
cout<<"\n\nStudent Grades \n";
double tests[SIZE1]={100.,92.0,86.5,85.0,91.5,99.0};


for (int i=0;i<6;i++){
   cout<<tests[i]<<" ";
    sum=sum+tests[i];

}


cout<<"\n\nTotal Grades are "<<sum<<endl;
average=sum/SIZE1;
cout<<"\nAverage grades is "<<setprecision(2)<<fixed<<average<<endl<<endl;

}
//************************************** CASE: 2_1 ************************************************** */
void test21(){
    
    
    const int SIZE=5;
    int integers[SIZE];

    //Sorting the array

    cout<<"\n\nEnter "<<(SIZE)<<(" integers\n\n");

    for (int i=0;i<SIZE;i++){
        cout<<("Enter Element ")<<(i+1)<<(" ");
        cin>>(integers[i]);
    }

    //Display the array

    cout<<("\nThe original array \n");

    for (int i=0;i<SIZE;i++){
        cout<<("Element ")<<(i+1)<<(" is ");
        cout<<(integers[i])<<endl;
        
    }
    //Proccess the original array

    for (int i=0;i<SIZE;i++){
        integers[i]=pow(integers[i],3);
    }

    //Display the updated array

    cout<<("\nThe updated  array (cubed elements)\n");

    for (int i=0;i<SIZE;i++){
        cout<<("Element ")<<(i+1)<<(" is ");
        cout<<(integers[i])<<endl;
        
    }
    
}

//CASE 3
//**************************************  CASE: 3_1 ************************************************** */
char table(int rows,int cols,char ch)
{
    for (int i=1;i<=rows;++i)
    {
        for (int j=1;j<=cols;++j)
        {
         cout<<(ch);
        }
        cout<<("\n");
    }
    return ch;
}
//**************************************  CASE: 3_2 ************************************************** */
// function to print a row
void print_char(int num)
{
    // base case
    if (num == 0)
        return;
    cout << "*";

    // recursively calling printn()
    print_char(num - 1);
}

// function to print the pattern
void print_pattern(int n, int i)
{
    // base case
    if (n == 0)
        return;
    print_char(i);
    cout << endl;

    // recursively calling pattern()
    print_pattern(n-1, i +1);
}

int print_line(int n){
    if (n==0) return 0;
    for (int i=n;i>0;i--){
        cout<<"*";
    }
    n-=1;
    cout<<endl;
    return (n);
}
void print_patt(int n){
    if (n==0) return;
    
    print_line(n);
    print_patt(n-1);
    
}

//**************************************  CASE: 3_3 ************************************************** */
int factorial(int n)
{
    if (n<=1)
    {
    return 1;
    }
    else
    {
     return n*factorial(n-1);
    }
    
}

//**************************************  CASE: 3_4 ************************************************** */
void showBoard() {
    char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    cout << "\t     |     |     \n";
    cout << "\t  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << " \n";
    cout << "\t_____|_____|_____\n";
    cout << "\t     |     |     \n";
    cout << "\t  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << " \n";
    cout << "\t_____|_____|_____\n";
    cout << "\t     |     |     \n";
    cout << "\t  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << " \n";
    cout << "\t     |     |     \n";
}

//**************************************  CASE: 3_5 ************************************************** */
// Custom function to calculate power for non-negative integer exponents
int Power(int base, int exponent) 
{
    int result = 1;
    for (int i = 0; i < exponent; ++i) 
    {
        result *= base;
    }
    return result;
}

//**************************************  CASE: 3_6 ************************************************** */   
int add(int a, int b) {
    return a + b;
}

//**************************************  CASE: 3_7 ************************************************** */
//**************************************  CASE: 3_8 ************************************************** */

// CASE 4:
//************************************** READ FILE FUNCTION ************************************************** */





inline void runRestaurantApp() {
                test29();
}










void readFile(string fileName){
ifstream inFile;
    
    string line;
   
    // Opem the file
    inFile.open(fileName);
    // If the file successufully opened, Proccess it.
    if (inFile){
    // Read the text from the file and display them
         while(getline(inFile,line)){
            cout<<line<<endl;
         }
         inFile.close();
        }
        else{
        cout<<"Error opening the file \n";
        }

}




//********************************************* DRIVER CODE ************************************************** */
int main(){
int choice, choice1,choice2;

do{
mainMenu1(choice);
     
    switch (choice){               
            case 1: 
            do{  
                subMenu1(choice1);
                switch(choice1){

                    case 1: {
                      case1();
                       
        
                       break;
                    }

                    case 2: {
                    readFile("Pointers/ptr_value_mod.cpp");
                    outPut();
                    
                    int number;
                    
                    cout<<"\nEnter the original variable please: ";cin>>number;
                    cout<<"Original Variable is "<<number<<endl;
                    modifyValue(&number); // modifies the variable at the run time
                    cout<<"The new variable is "<<number<<endl;
                    
                    break;
                        }

                    case 3: {
                        readFile("Pointers/ptr_array.cpp");
                        outPut();
                        array_Ptr();
                         break;
                        }
                    case 4: {
                        readFile("Pointers/unq_smt_ptr.cpp");
                        outPut();
                        case4();
                        break;
                        }
                    case 5: {
                    readFile("Pointers/share_smt_ptr.cpp");
                    outPut();
                    case5();
                    break;
                        }
                     
                     case 6: {
                        readFile("Pointers/weak_smt_ptr.cpp");
                        outPut();
                        case6();
                        break;
                        }
                     case 7: {
                        readFile("Pointers/main.cpp");
                        outPut();
                        case7();
                        break;
                        }
                    
                    
                       
                    default:
                    if(choice1!=0){
                    cout<<"\nInvalid choice! Try again...\n";subMenu1(choice1);
                    }
                    else 
                    {
                    break;
                    }          
                } 
            }while(choice1!=0);     
            break;
            /////////////////////////////////////////////////////////////
            case 2: 
            do{  
                subMenu2(choice2);
                switch(choice2){  
                    case 1:readFile("choice2Files/Array_Management.cpp");test21();
                    break;
                    case 2:readFile("choice2Files/Average_Grades.cpp");outPut();test22();
                    break;
                    case 3:readFile("choice2Files/Division_Sales.cpp");outPut();test23();
                    break;
                    case 4:readFile("choice2Files/searchArray.cpp");test24();
                    break;
                    case 5:readFile("choice2Files/AddMatrix.cpp");outPut();test25();
                    break;
                    case 6:readFile("choice2Files/SortingMatrix.cpp");outPut();test26();
                    break;
                    case 7:readFile("choice2Files/TransposeMatrix.cpp");outPut();test27();
                    break;
                    case 8:readFile("choice2Files/PayRoll.cpp");outPut();test28();
                    break;
                    case 9:readFile("choice2Files/restaurantMenu.cpp");outPut();runRestaurantApp();
                    break;
                    default:
                    if(choice2!=0){
                    cout<<"\nInvalid choice! Try again...\n";subMenu2(choice2);
                    }
                    else {
                    break;
                    }
                }
            }while(choice2!=0);
            break;
            //////////////////////////////////////////////////////////////
            case 3: 
            do{  
                subMenu3(choice2);
                switch(choice2){  
                    case 1:readFile("choice3Files/tableChar.cpp");
                          int rows,cols;char ch;
                           cout<<("\nHow many rows of a table do you need ? ");cin>>(rows);
                           cout<<("\nHow many columns of a table do you need ? ");cin>>(cols);
                           cout<<("\nEnter the character to draw a table ? ");cin>>(ch);
                           table(rows,cols,ch);
                    break;

                    case 2:readFile("choice3Files/Recursive_Pattern.cpp");
                         int n;
                         cout<<"\nEnter n :";cin>>n;
                         cout<<endl<<endl<<endl;
                         print_char(n);
                         cout<<endl<<endl<<endl;
                         print_line(n);
                         cout<<endl<<endl<<endl;
                         print_patt(n);
                         print_pattern(n, 1);
                    break;

                    case 3:readFile("choice3Files/Recursive_Fact.cpp");outPut();
                          int num;
                          cout<<("\n Enter the number for factorial ");cin>>(num);
                          cout<<"\nThe factorial of "<<num<<" is "<<(factorial(num));cout<<"\n\n";
    
                    break;

                    case 4:readFile("choice3Files/numeric_board.cpp");showBoard();
                    break;
                    case 5:readFile("choice3Files/power_custom.cpp");outPut();
                         int base,exponent,result;
                         cout<<("\nEnter the base ");cin>>(base);
                         cout<<("\nEnter the exponent ");cin>>(exponent);
    
                         result = Power(base, exponent);

                         cout<<(base)<<( " raised to the power of ");
                         cout<<( exponent)<<(" equals ");
                         cout<<(result)<<("\n");
    
                    break;
                    case 6:readFile("choice3Files/Function_pointer.cpp");outPut();
                    // Declare a function pointer that matches
                    // the signature of add() function
                    int (*fptr)(int, int);
                    // Assign to add()
                    fptr = &add;
                     // Call the function via ptr
                     printf("%d\n", fptr(10, 5));
                     cout<<endl<<fptr(20,20)<<endl;

                    break;
                    case 7:readFile("choice2Files/TransposeMatrix.cpp");outPut();test27();
                    break;
                    case 8:readFile("choice2Files/PayRoll.cpp");outPut();test28();
                    break;
                    case 9:readFile("choice2Files/restaurantMenu.cpp");outPut();
                    break;
                    default:
                    if(choice2!=0){
                    cout<<"\nInvalid choice! Try again...\n";subMenu3(choice2);
                    }
                    else {
                    break;
                    }
                }
            }while(choice2!=0);
            break;
            //////////////////////////////////////////////////////////////
            
            case 4:
              do{  
                subMenu4(choice2);
                switch(choice2){  
            
                                case 1:readFile("choice4Files/Ascending_Order.cpp");outPut();ascend();
                                
                                break; 
                                case 2:readFile("choice4Files/Bool_Ternary_operator.cpp");outPut();bool_();
                                break;
                                case 3:readFile("choice4Files/Char_ASCII_Code.cpp");outPut();ascii();
                                break;
                                case 4:readFile("choice4Files/Credentials_Login.cpp");outPut();login();
                                break;
                                case 5:readFile("choice4Files/Cumulative_Factorial.cpp");outPut();cumulativeFactorial();
                                break; 
                                case 6:readFile("choice4Files/Factorial.cpp");outPut();factorial();
                                
                                break;
                                case 7:readFile("choice4Files/Formatting.cpp");outPut();
                                formatting();
                                break;
                                case 8:readFile("choice4Files/Generating_num.cpp");outPut();rand_();
                                break;
                                case 9:readFile("choice4Files/Sum_Generated_Nums.cpp.cpp");outPut();rand_sum();
                                break; 
                                case 10:readFile("choice4Files/LMC.cpp");outPut();
                                break;
                                case 11:readFile("choice4Files/MIN_MAX.cpp");outPut();
                                break;
                                case 12:readFile("choice4Files/Odd_Even_num.cpp");outPut();
                                break;
                                case 13:readFile("choice4Files/Sum_Even_Num.cpp");outPut();
                                break; 
                                case 14:readFile("choice4Files/Sum_Num_Series.cpp");outPut();
                                break;
                                case 15:readFile("choice4Files/Range_occurence.cpp");outPut();
                                break;
                                
                                
                                case 16:readFile("choice4Files/speed_conversion.cpp");outPut();
                                break; 
                                case 17:readFile("choice4Files/Sentinel.cpp");outPut();
                                break;
                                case 18:readFile("choice4Files/Quadratic.cpp");outPut();
                                break;
                                case 19:readFile("choice4Files/Prime_Num_1,100.cpp");outPut();
                                break;
                                case 20:readFile("choice4Files/Print_Char_PatternF.cpp");outPut();
                                break; 
                                case 21:readFile("choice4Files/Print_Char_PatternW.cpp");outPut();
                                break;
                                case 22:readFile("choice4Files/Sum_Num_Series.cpp");outPut();
                                break;
                                case 23:readFile("choice4Files/Temp_conversion.cpp");outPut();
                                break;
                                case 24:readFile("choice4Files/Switch.cpp");outPut();
                                break;
            
            
            
            
            
            
                                default:if(choice2!=0){
                                cout<<"\nInvalid choice! Try again...\n";subMenu4(choice2);
                                }
                                        else {
                                        break;
                                        }
                }

            }while(choice2!=0);
           
            break;

            case 5:
              do{  
                subMenu5(choice2);
                switch(choice2){  
            
                                case 1:readFile("choice4Files/Ascending_Order.cpp");
                                break; 
                                case 2:readFile("choice4Files/Bool_Ternary_operator.cpp");
                                break;
                                case 3:readFile("choice4Files/Char_ASCII_Code.cpp");
                                break;
                                case 4:readFile("choice4Files/Credentials_Login.cpp");
                                break;
                                case 5:readFile("choice4Files/Cumulative_Factorial.cpp");
                                break; 
                                case 6:readFile("choice4Files/Factorial.cpp");
                                break;
                                case 7:readFile("choice4Files/Formatting.cpp");
                                break;
                                case 8:readFile("choice4Files/Generating_num.cpp");
                                break;
                                case 9:readFile("choice4Files/Sum_Generated_Nums.cpp.cpp");
                                break; 
                                case 10:readFile("choice4Files/LMC.cpp");
                                break;
                                case 11:readFile("choice4Files/MIN_MAX.cpp");
                                break;
                                case 12:readFile("choice4Files/Odd_Even_num.cpp");
                                break;
                                case 13:readFile("choice4Files/Sum_Even_Num.cpp");
                                break; 
                                case 14:readFile("choice4Files/Sum_Num_Series.cpp");
                                break;
                                case 15:readFile("choice4Files/Range_occurence.cpp");
                                break;
                                
                                
                                case 16:readFile("choice4Files/speed_conversion.cpp");
                                break; 
                                case 17:readFile("choice4Files/Sentinel.cpp");
                                break;
                                case 18:readFile("choice4Files/Quadratic.cpp");
                                break;
                                case 19:readFile("choice4Files/Prime_Num_1,100.cpp");
                                break;
                                case 20:readFile("choice4Files/Print_Char_PatternF.cpp");
                                break; 
                                case 21:readFile("choice4Files/Print_Char_PatternW.cpp");
                                break;
                                case 22:readFile("choice4Files/Sum_Num_Series.cpp");
                                break;
                                case 23:readFile("choice4Files/Temp_conversion.cpp");
                                break;
                                case 24:readFile("choice4Files/Switch.cpp");
                                break;
            
            
            
            
            
            
                                default:if(choice2!=0){
                                cout<<"\nInvalid choice! Try again...\n";subMenu5(choice2);
                                }
                                        else {
                                        break;
                                        }
                }

            }while(choice2!=0);
           
            break;
            
            case 9:
            do{  
                subMenu9(choice2);
                switch(choice2){  
            
                                case 1:readFile("introduction.txt");
                                break; 
                                case 2:readFile("beginners.txt");
                                break;
                                case 3:readFile("intermediate.txt");
                                break;
                                case 4:readFile("advanced.txt");
                                break;
            
                                default:if(choice2!=0){
                                cout<<"\nInvalid choice! Try again...\n";subMenu9(choice2);
                                }
                                        else {
                                        break;
                                        }
                }

            }while(choice2!=0);
            break;    
            //////////////////////////////////////////////////////////////
            default:
             if(choice!=0)
            {
             cout<<"\nInvalid choice! Try again...\n";mainMenu1(choice);
            }
            else 
            {
            cout<<"\n*****End of the program*****\n"<<endl;break;
            }         
    }  

}while(choice!=0);

 return 0;
}

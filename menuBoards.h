#include <iostream>
#include <iomanip>
using namespace std;

//************************************** MAIN MENU *************************************************** */
void mainMenu1(int &choice){
    cout<<"\n\033[47;30m******************** C++ PROGRAMMING ********************\033[0m"<<endl;
    cout<<"\n1. POINTERS"<<"\t2. ARRAYS"<<"\t3. FUNCTIONS"
        <<"\n4. FUNDAMENTALS"<<"\t5. CLASSES"
        <<"\n9. README"<<"\n0. RETURN TO MAIN MENU"<<endl;  
    cout<<"\nENTER YOUR TOPIC CHOICE ";cin>>choice;
}
//*************************************** SUB MENUS ************************************************** */
void subMenu1(int &choice){
    cout<<"\n\033[47;30m******************** POINTERS ********************\033[0m"<<endl;

       cout<<"\n 1. Ptr Arith.          "<<"\t\t\t 2. Ptr Modifier."<<"\t\t3. Ptr Array.  \n"
           <<"\n 4. Unique Ptr.         "<<"\t\t\t 5. Shared Ptr.  "<<"\t\t6. Weak Ptr.\n"
           <<"\n 7. MORE.\n"
           <<"\n 0. Quit"<<endl;
           cout<<"\nENTER YOUR PROGRAM CHOICE ";cin>>choice;
}
void subMenu2(int &choice){
    cout<<"\n\033[47;30m******************** ARRAYS ******************** \033[0m"<<endl;
cout<<setw(20);
       cout<<"\n 1. ARRAY MANAGEMENT   "<<"\t\t\t 2. AVERAGE GRADES"<<"\t\t 3. TWO D ARRAY\n"
           <<"\n 4. ARRAY SEARCH *     "<<"\t\t\t 5. ADD MATRIX    "<<"\t\t 6. SORTING MATRIX\n"
           <<"\n 7. TRANSPOSE MATRIX.  "<<"\t\t\t 8. PAY ROLL      "<<"\t\t 9. RESTAURANT MENU\n"
           <<"\n 0. RETURN TO MAIN MENU"<<endl;
           cout<<"\nENTER YOUR PROGRAM CHOICE ";cin>>choice;
}
void subMenu3(int &choice){
    cout<<"\n\033[47;30m******************** FUNCTIONS ********************\033[0m"<<endl;
    cout<<"\n1. Print Char Table        "<<"\t 2. Print Pattern Recursive "<<"\t\t 3. Factorials\n"
           <<"\n4. Numeric Board        "<<"\t 5. Exp. Custom Function    "<<"\t\t 6. Function Pointer\n"
           <<"\n7. Program 7            "<<"\t 8. Program 8.              "<<"\t\t 9. Program 9\n"
           <<"\n0. Quit"<<endl;
           cout<<"\nENTER YOUR PROGRAM CHOICE ";cin>>choice;
}
void subMenu4(int &choice){
    cout<<"\n\033[47;30m******************** FUNDAMENTALS ********************\033[0m"<<endl;
    cout<<"\n 1. Ascending order   "<<"\t\t\t 2. Bool_Ternary     "<<"\t3. ASCII Char\n"
           <<"\n 4. Logins           "<<"\t\t\t 5. Cumul_Fact(!)    "<<" \t6. Factorial\n"
           <<"\n 7. Output formatting"<<"\t\t\t 8. Generating_num.  "<<" \t9. Sum_Gene_num\n"
           <<"\n10. LMC              "<<"\t\t\t11. Min_Max          "<<"\t12. Odd_Evem  \n"
           <<"\n13. Sum_Even_num     "<<"\t\t\t14. Sum_Num_series.  "<<"\t15. Range_occurence \n"
           <<"\n16. Speed conversion "<<"\t\t\t17. Speed conversion "<<"\t18. Sentinel  \n"
           <<"\n19. Quadratic        "<<"\t\t\t20. Prime Num [1,100]"<<"\t21. P Pattern (For) \n"
           <<"\n22. P Pattern (while)"<<"\t\t\t23. P Num_pattern    "<<" \t24. Temperature conversion  \n"
           
           <<"\n 0. To return to previous menu"<<endl;
           cout<<"\nENTER YOUR PROGRAM CHOICE ";cin>>choice;
}
void subMenu5(int &choice){
    cout<<"\n\033[47;30m******************** CLASSES ********************\033[0m"<<endl;
    cout<<"\n 1. Ascending order   "<<"\t\t\t 2. Bool_Ternary     "<<"\t3. ASCII Char\n"
           <<"\n 4. Logins           "<<"\t\t\t 5. Cumul_Fact(!)    "<<" \t6. Factorial\n"
           <<"\n 7. Output formatting"<<"\t\t\t 8. Generating_num.  "<<" \t9. Sum_Gene_num\n"
           <<"\n10. LMC              "<<"\t\t\t11. Min_Max          "<<"\t12. Odd_Evem  \n"
           <<"\n13. Sum_Even_num     "<<"\t\t\t14. Sum_Num_series.  "<<"\t15. Range_occurence \n"
           <<"\n16. Speed conversion "<<"\t\t\t17. Speed conversion "<<"\t18. Sentinel  \n"
           <<"\n19. Quadratic        "<<"\t\t\t20. Prime Num [1,100]"<<"\t21. P Pattern (For) \n"
           <<"\n22. P Pattern (while)"<<"\t\t\t23. P Num_pattern    "<<" \t24. Temperature conversion  \n"
           
           <<"\n 0. To return to previous menu"<<endl;
           cout<<"\nENTER YOUR PROGRAM CHOICE ";cin>>choice;
}

void subMenu9(int &choice){
    cout<<"\033[47;30m******************** ARTICULATIONS ********************\033[0m"<<endl;

    cout<<"\n 1. INTRODUCTION C++"<<"\t\t\t2. BEGINNERS"<<"\t\t3. INTERMEDIATE\n"
        <<"\n 4. ADVANCED C++.   "<<"\t\t\t5.          "<<"\t\t6.             \n"
        <<"\n 7.                 "<<"\t\t\t8.          "<<"\t\t9.             \n"
        <<"\n 0. QUIT.           "<<endl;
           cout<<"\nENTER YOUR PROGRAM CHOICE ";cin>>choice;
}

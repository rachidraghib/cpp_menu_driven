#include <iostream>
#include <iomanip>
using namespace std;

double subTotal;
 double total1=0,total2=0,total3=0,total4=0,total5=0,
       total6=0,total7=0,total8=0,total9=0;
 int Qte;
 double tax,grandTotal=0;
 string title="\n\033[47;30mRESTAURANT MENU\033[0m";


void mainMenu(int &choice){
cout<<"\n\t\t\t\t\t\033[30;31mMAIN MENU\033[0m"<<endl;
cout<<"\n\n\n\033[30;31m1. APPETIZERS\033[0m"<<"\t\t\t\t\033[30;31m2. SOUPS AND SALADS\033[0m ";
cout<<"\n\033[30;31m0. Quit\033[0m"<<endl;  
cout<<"\n\033[30;33mENTER YOUR TOPIC CHOICE:\033[0m";cin>>choice;
}

void AppMenu(int &choice){
    cout<<"\n\t\t\t\t\t\033[30;32mAPPETIZERS\033[0m"<<endl;
    
   
    string item[9]={"Appetizer 1","Appetizer 2","Appetizer 3","Appetizer 4","Appetizer 5","Appetizer 6","Appetizer 7","Appetizer 8","Appetizer 9"};
    double price[9]={9.95,11.90,15.00,7.75,10.95,14.90,5.00,17.75,13.49};
    
    


    cout<<"\n\n\n\033[30;32m1. Crispy Rolls $8.95\033[0m"<<"\t\t\033[30;32m2. Edamame $6.50\033[0m        "<<"   \t\033[30;32m3. Spicy Edamame 8.50\033[0m\n"
        <<"\n\033[30;32m4. Crab Rangoon $ 9.95\033[0m   "<<"\t\033[30;32m5. Spicy Crab Rangoon $ 9.95\033[0m"<<"\t\033[30;32m6. Chicken Sa-tay $ 11.95\033[0m\n"
        <<"\n\033[30;32m7. Scallion Pancake $8.50\033[0m"<<"\t\033[30;32m8. Chicken Wing (6) $ 11.50\033[0m"<<"\t\033[30;32m9. Chili Wing $ 13.95\033[0m\n"
        <<"\n\033[30;32m0. Return to main menu\033[0m"<<endl;
           cout<<"\n\033[30;33mENTER YOUR APPETIZER CHOICE:\033[0m";cin>>choice;
           if (choice!=0){
           cout<<"\nENTER THE QUANTITY: ";cin>>Qte;
           
           
           
           subTotal=price[choice-1]*Qte;
           
           cout<<setprecision(2)<<fixed<<showpoint;
           cout<<"\nItem: "<<item[choice-1]<<"\nQuantity "<<Qte<<"\nPrice "<<price[choice-1];
           cout<<"\nThe subtolal is "<<subTotal<<endl;
           total1+=subTotal;
           cout<<"\nAppetizers total: "<<total1<<endl;
           }
           
        }       

void Soup_SaladMenu(int &choice){
    cout<<"\n\t\t\t\t\t\033[30;32mSOUPS AND SALADS\033[0m"<<endl;
    
   
    string item[9]={"Soup 1","Soup 2","Soup 3","Soup 4","Salad 1","Salad 2","Salad 3","Salad 4","Salad 5"};
    double price[9]={9.95,11.90,15.00,7.75,10.95,14.90,5.00,17.75,13.49};
    
    


    cout<<"\n\n\n\033[30;32m1. Soup1 9.95\033[0m"<<"\t\t\t\033[30;32m2. Soup2 11.90\033[0m"<<"\t\t\033[30;32m3. Soup3 15.00\033[0m\n"
        <<"\n\033[30;32m4. Soip4 7.75\033[0m"<<"\t\t\t\033[30;32m5. Salad1 10.95\033[0m"<<"\t\t\033[30;32m6. Salad2 14.90\033[0m\n"
        <<"\n\033[30;32m7. Salad3 5.00\033[0m"<<"\t\t\t\033[30;32m8. Salad4 17.75\033[0m"<<"\t\t\033[30;32m9. Salad5 13.49\033[0m\n"
        <<"\n\033[30;32m0. Return to main menu\033[0m"<<endl;
           cout<<"\n\033[30;33mENTER YOUR APPETIZER CHOICE:\033[0m";cin>>choice;
           if (choice!=0){
           cout<<"\nENTER THE QUANTITY: ";cin>>Qte;
           
           
           
           subTotal=price[choice-1]*Qte;
           
           cout<<setprecision(2)<<fixed<<showpoint;
           cout<<"\nItem: "<<item[choice-1]<<"\nQuantity "<<Qte<<"\nPrice "<<price[choice-1];
           cout<<"\nThe subtolal is "<<subTotal<<endl;
           total2+=subTotal;
           cout<<"\nSoups and salads total: "<<total2<<endl;
           }
         
        }      
void test29(){
          
int choice, choice1,choice2;  
mainMenu(choice);    
do{ 

switch (choice){

   
case 1:
 
     
        AppMenu(choice1);
        if (choice1==0) mainMenu(choice);
    
        break;
          
case 2: 
    
        Soup_SaladMenu(choice1);
        if (choice1==0) mainMenu(choice);
        
        break;  

default:
        cout<<"\nError: Choose the correct number..."<<endl;
    
        }
   }while(choice!=0);          

cout<<"\n*****Itemized reciept*****\nCategories\n";
cout<<"\nAppetizers:       "<<total1<<endl;
cout<<"\nSoups and salads  "<<total2<<endl;

grandTotal+=total1+total2;
cout<<"\nGrand Total:    $ "<<grandTotal<<endl;

tax=grandTotal*0.1;
cout<<"\nSales Tax:      $ "<<tax<<endl;
cout<<"\nNet Sales:      $ "<<(grandTotal+tax)<<endl;

}

    
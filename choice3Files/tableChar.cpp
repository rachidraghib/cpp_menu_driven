#include <iostream>
#include <iomanip>

using namespace std;
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


int main() 
{
int rows,cols;char ch;
cout<<("\nHow many rows of a table do you need ? ");cin>>(rows);
cout<<("\nHow many columns of a table do you need ? ");cin>>(cols);
cout<<("\nEnter the character to draw a table ? ");cin>>(ch);
table(rows,cols,ch);



   return 0;
}

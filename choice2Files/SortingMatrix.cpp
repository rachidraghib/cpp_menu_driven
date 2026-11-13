#include <iostream>
#include <cmath>
using namespace std;
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
//**************************************************************** */
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
//******************************************************************** */
/**************************************** */

int main(){

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
    return 0;
}
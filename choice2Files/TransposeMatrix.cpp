#include <iostream>
#include <cmath>
using namespace std;
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
    
/**************************************** */

int main(){

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
    return 0;
}
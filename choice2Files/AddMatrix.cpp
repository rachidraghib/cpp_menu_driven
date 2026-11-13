#include <iostream>
#include <cmath>
using namespace std;

//**************************************************************** */
void PrintMatrix(int row,int col){
    
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
/**************************************** */
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

/*************************************** */

int main(){

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
    return 0;
}
   


/*do
{ 
   cout<<"\nEnter the size of matrix you wish to procced: \n";
   cout<<"ROWS : ";cin>>rows;
   cout<<"COLS : ";cin>>cols;
   
   while (rows==0 || rows==1 || cols==0 || cols==1 ){
    cout<<"\nTranspose Not Available! enter a valid matrix \n";
    cout<<"ROWS : ";cin>>rows;
    cout<<"COLS : ";cin>>cols;
    
}

   
   ShowTranspose(rows,cols);break;
   
   
   
    
   
}
while(rows!=0 && rows!=1 && cols!=0 && cols!=1);
void MatrixProduuct(const int row,const int col){
    int MatrixA[100][100];
    int MatrixB[100][100];
    int AtimeB[100][100];
    int temp[100][100];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            AtimeB[i][j]=0;
            cout<<"\nEnter Matrix A a"<<i+1<<j+1<<": ";cin>>MatrixA[i][j];
            cout<<"\nEnter Matrix B a"<<i+1<<j+1<<": ";cin>>MatrixB[i][j];
            
            AtimeB[i][j]+=MatrixA[i][j]*MatrixB[i][j]+MatrixA[i][0]*MatrixB[0][j];;
            
            
        }
    }
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cout<<" "<<AtimeB[i][j];
        if (j==col-1){
            cout<<endl<<endl;
        }
   
    }
    }
    
    cout<<endl;

}


   */

       
   
   
    
    
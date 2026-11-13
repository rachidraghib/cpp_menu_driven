#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void showBoard() {
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

int main() 
{
	
showBoard();


   return 0;
}
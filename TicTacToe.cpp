#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> CreateBoard(){


    vector<vector<char>> board
    {
        {'N', 'N', 'N'},
        {'N', 'N', 'N'},
        {'N', 'N', 'N'}
    };

    return board;

}

// void DisplayBoard(vector<vector<char>> board){ // person 1
//     cout << "Printing Board: " << endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << board[i][j];
//         }
//         cout << endl;
//     }
// }

void DisplayBoard(vector<vector<char>> board) // person 2
{
     for (int i = 0; i < 3; i++)
     {
        vector<char> r = board[i];

        cout << r[0];
        cout << "  ";

        cout << r[1];
        cout << "  ";

	cout << r[2];
        cout << '\n';
     }
}

void GetPlayerChoice(int *row, int *col){

    cout << "Enter row: ";
    cin >> *row;
    cout << endl;
    cout << "Enter column: ";
    cin >> *col;

}

int main(){

    int row,col;

    vector<vector<char>> myBoard = CreateBoard();


    DisplayBoard(myBoard);

    GetPlayerChoice(&row,&col);


}
#include <iostream>
#include <vector>
#include <string>
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

void placeMarker(int loc, string mark, vector<vector<string>> &board)
{
    int r, c;
    r = ( (loc - 1) / 3 );
    c = ( (loc - 1) % 3 );
    board[r][c] = mark;
}



// void DisplayBoard(vector<vector<int>> board) // person 2
// {
//      for (int i = 0; i < 3; i++)
//      {
//         vector<int> r = board[i];


void GetPlayerChoice(int *row, int *col){

    cout << "Enter row: ";
    cin >> *row;
    cout << endl;
    cout << "Enter column: ";
    cin >> *col;
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


int main(){

    int row,col;

    vector<vector<char>> myBoard = CreateBoard();


    DisplayBoard(myBoard);

    GetPlayerChoice(&row,&col);



}

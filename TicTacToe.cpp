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

     cout << endl;
}


void PlaceMarker(int r, int c, char mark, vector<vector<char>> &board)
{
 
    board[r-1][c-1] = mark;

}



// void DisplayBoard(vector<vector<int>> board) // person 2
// {
//      for (int i = 0; i < 3; i++)
//      {
//         vector<int> r = board[i];


void GetPlayerChoice(int *row, int *col){

    cout << "Enter Position: (1-3) " << endl;
    cout << "Enter row: ";
    cin >> *row;
    cout << "Enter column: ";
    cin >> *col;
    cout << endl;

}

int main(){

    int row,col;
    char mark;

    vector<vector<char>> myBoard = CreateBoard();

    // GAME TIME!

    for(int i=1; i<10; i++){

        cout << " TURN #" << i << endl;

        if(i % 2 == 0){
            cout << "____ Player 2's Turn (O)____" << endl;
            mark = 'O';
        }else{
            cout << "____ Player 1's Turn (X)____" << endl;
            mark = 'X';
        }

        cout << endl;

        GetPlayerChoice(&row,&col);

        if(row <= 0 || row > 3 || col <= 0 || col > 3){
            cout << "You entered an invalid row/column so you don't get a turn." << endl;
        }else{

        PlaceMarker(row, col, mark, myBoard );

        DisplayBoard(myBoard);

        }



    }

    cout << "Game Over!" << endl;

    return 0;



}

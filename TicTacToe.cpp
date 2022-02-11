#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> CreateBoard(){


    vector<vector<int>> board
    {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    return board;

}

void DisplayBoard(vector<vector<int>> board)
{
     for (int i = 0; i < 3; i++)
     {
        vector<int> r = board[i];

        cout << r[0];
        cout << "  ";

        cout << r[1];
        cout << "  ";

	cout << r[2];
        cout << '\n';
     }
}

int main(){

    vector<vector<int>> myBoard = CreateBoard();


    //cout << myBoard[0][0] << endl;
    DisplayBoard(myBoard);

}

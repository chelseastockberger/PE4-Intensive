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

void DisplayBoard(vector<vector<char>> board){
    cout << "Printing Board: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << board[i][j];
        }
        cout << endl;
    }

}

int main(){

    vector<vector<char>> myBoard = CreateBoard();


    DisplayBoard(myBoard);


}
#include<bits/stdc++.h>
using namespace std;
bool issafe(vector<vector<char>>&board,int row,int col,int num){
    for(int i=0;i<9;i++){
        if(board[i][col] == num){
            return false;
        }
    }
      for(int j=0;j<9;j++){
        if(board[row][j] == num){
            return false;
        }
    }

    int srow = (row/3)*3;
    int scol = (col/3)*3;


    for(int i=srow;i<=srow+2;i++){
        for(int j=scol;j<=scol+2;j++){
            if(board[i][j] == num){
                return false;
            }
        }
    }

    return true;
}

bool solve(vector<vector<char>> &board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j] == '.'){
                for(char num = '1';num<='9';num++){
                    if(issafe(board,i,j,num)){
                        board[i][j]= num;


                        if(solve(board)) return true;
                        board[i][j] = '.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);

    }
int main(){
      vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

   solveSudoku(board);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }


}

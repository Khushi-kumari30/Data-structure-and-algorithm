#include<bits/stdc++.h>
using namespace std;
 bool check(int ind,vector<vector<char>>& board, string word,int row,int col){
        if(ind == word.size()){
            return true;
        }

        int n = board.size();
        int m = board[0].size();

        if(row < 0 || row >= n ||col < 0 || col >= m || board[row][col] != word[ind]){
            return false;
        }

          char temp = board[row][col];
          board[row][col] = '.';

          int dr[]= {-1,1,0,0};
          int dc[] = {0,0,-1,1};

          for(int k=0;k<4;k++){
            int newrow = row + dr[k];
            int newcol = col + dc[k];
            if(check(ind+1,board,word,newrow,newcol)) return true;
          }
        board[row][col] = temp;
        return false;
     }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(check(0,board,word,i,j)){
                    return true;
                }
            }
        }
        return false;
    }
int main() {
    vector<vector<char>> board = {
        {'A','B','D','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };

    string word = "ABCCED";

    if (exist(board, word))
        cout << "Word Found";
    else
        cout << "Word Not Found";

}

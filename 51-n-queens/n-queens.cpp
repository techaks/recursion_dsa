class Solution {
public:
    vector<vector<string>> res;
    int N ;
    bool isValid(vector<string>& board , int row,int col){

        // chech upward in same col
        for(int i=row-1;i>=0;i--){
            if(board[i][col]=='Q'){
                return false;
            }
        }
    //left diagonal
        for(int i = row-1,j=col-1 ; i>=0 && j>=0 ; i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }

        //right diagonal
        for(int i = row-1,j=col+1 ; i>=0 && j<=N ; i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }

        return true;

    }
    void solve(int row,vector<string>& board){
        if(row>=N) {
            res.push_back(board);
            return;
        }

        for(int col=0 ; col<N ;col++ ){
            if(isValid(board,row,col)){
                board[row][col]='Q';
                solve(row+1,board);
                board[row][col]='.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
         vector<string>board(n , string(n,'.'));
         N=n;
         solve(0,board);
         return res;
        
    }
};
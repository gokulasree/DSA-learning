class Solution {
    bool isSafe(vector<string>&board,int row,int col,int n){
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        for(int j=0;j<n;j++){
            if(board[row][j]=='Q'){
                return false;
            }
        }
        for(int i=row, j=col; i>=0 && j>=0; i--, j--) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }
        for(int i=row, j=col; i>=0 && j<n; i--, j++) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }
    void solve(vector<string>&board,int row,int n,vector<vector<string>>&finaloutput){
        if(row==n){
            finaloutput.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(board,row,col,n)){
                board[row][col]='Q';
                solve(board,row+1,n,finaloutput);//backtrack
                board[row][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>finaloutput;
        vector<string>board(n,string(n,'.'));
        solve(board,0,n,finaloutput);
        return finaloutput;
    }
};
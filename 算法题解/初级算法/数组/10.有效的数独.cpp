class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rowlength = board.size();
        int collength = board[0].size();
        int *row = new int[rowlength * 10];
        int *col = new int[collength * 10];
        int *box = new int[rowlength/3 * rowlength/3 * 10];
        /*Hash Table*/
        int k;
        for(int i = 0; i != rowlength; i++)
            for(int j = 0; j != collength; j++){
                if(board[i][j] == '.') continue;
                else {
                    k = board[i][j] - '0';      
                    if(row[10 * i + k] == 1) return false;
                    else row[10 * i + k] = 1;
                    if(col[10 * j + k] == 1) return false;
                    else col[10 * j + k] = 1;
                    if(box[(i/3 * 3 + j/3) * 10 + k] == 1) return false;
                    else box[(i/3 * 3 + j/3) * 10 + k] = 1;
                }
            }
        
        return true;
    }
};
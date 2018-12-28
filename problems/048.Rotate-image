class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i != matrix.size(); i++){
            for(int j = i; j != matrix.size(); j++){
                if(i == j) continue;
                swap(matrix[i][j], matrix[j][i]);
            }
            reverse(&matrix[i][0], &matrix[i][matrix.size()]);
        }
        
    }
};
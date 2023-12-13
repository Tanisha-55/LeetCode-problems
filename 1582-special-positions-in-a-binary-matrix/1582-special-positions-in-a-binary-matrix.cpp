class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        //hashing-O(n^2)
        int row = mat.size() , col = mat[0].size() , count = 0;

        vector<int> rowCount(row, 0) , colCount(col, 0) ;
        
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(mat[i][j] == 1){
                    rowCount[i] += mat[i][j] ;
                    colCount[j] += mat[i][j] ;
                }         
            }
        }
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(mat[i][j] == 1 && rowCount[i] == 1 && colCount[j] == 1)
                    count++ ;
            }
        }
        return count ;
    }
};  
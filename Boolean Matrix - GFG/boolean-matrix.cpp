//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int row = matrix.size(), col = matrix[0].size();
        vector<int> oneRow(row, 0), oneCol(col, 0);
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j] == 1){
                    oneRow[i] = 1;
                    oneCol[j] = 1;
                }
            }
        }
        
        //row vector-- put 1 in the rows
        for(int i=0; i<oneRow.size(); i++){
            if(oneRow[i]==1){
                for(int j=0; j<col; j++){
                    matrix[i][j] = 1;
                }
            }
        }
        
        //col vector -- put 1 in all the cols
        for(int i=0; i<oneCol.size(); i++){
            if(oneCol[i]==1){
                for(int j=0; j<row; j++){
                    matrix[j][i] = 1;
                }
            }
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends
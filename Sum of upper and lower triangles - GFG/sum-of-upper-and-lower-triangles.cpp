//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        vector<int> v;
        int UpSum=0, LoSum=0;
        for(int i=0; i<n; i++){
            for(int j=n-1; j>=i; j--){
                UpSum+=matrix[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                LoSum+=matrix[i][j];
            }
        }
        v.push_back(UpSum);
        v.push_back(LoSum);
        return v;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        vector<int> result = ob.sumTriangles(matrix,n);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
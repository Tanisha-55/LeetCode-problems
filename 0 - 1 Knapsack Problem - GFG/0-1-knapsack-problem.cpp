//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// int t[10005][10005];
// memset(t,-1,sizeof(t));

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        // //RECURSIVE APPROACH ----TC - O(2^n)
        // //base condition
        // if(n==0 || W==0) return 0;
        
        // //choice diagram
        // //include in a knapsack
        // if(wt[n-1]<=W){
        //     return max( val[n-1] + knapSack(W - wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1) );
        // }
        // //not included
        // else if(wt[n-1] > W)
        //     return knapSack(W, wt, val, n-1);
        
            
        // //DP APPROACH- MEMOIZATION---RC + MEMORY
        // //2D memo bcoz 2 arg changes
        // //base condition
        // if(n==0 || W==0) return 0;
        // if(t[n][W]!=0) return t[n][W];
        
        // //choice diagram
        // if(wt[n-1]<=W){
        //     return t[n][W]=max(val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));
        // }
        // else if(wt[n-1] > W)
        //     return t[n][W]=knapSack(W, wt, val, n-1);
        
       
        //DP APPROACH - TABULATION----NO RC(ITERATIVE)
        int t[n+1][W+1];
        //base condition to INITIALIZATION
        for(int i=0; i<n+1; i++){
            for(int j=0; j<W+1; j++){
                if(i==0||j==0){
                    t[i][j]=0;
                }
            }
        }
        
        //choice diagram--n->i, w->j
        for(int i=1; i<n+1; i++){
            for(int j=1; j<W+1; j++){
                if(wt[i-1]<=j){
                    t[i][j] = max((val[i-1] + t[i-1][j-wt[i-1]]), t[i-1][j]);
                }
                else if(wt[i-1]>j){
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[n][W];
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
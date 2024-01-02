//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long maxi = 0, sum = 0;

    // Calculate sum of first subarray of size K
    for (int i = 0; i < K; i++) {
        sum += Arr[i];
    }

    maxi = sum;

    // Use sliding window to find maximum sum
    for (int i = K; i < N; i++) {
        sum = sum - Arr[i - K] + Arr[i];
        maxi = max(maxi, sum);
    }

    return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
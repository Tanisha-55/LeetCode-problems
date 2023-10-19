class Solution {
public:
    bool isPalindrome(int x) {
        int long rev=0;
        int n=x;
        while(x>0){
            rev=rev*10+x%10;
            x/=10;
        }
        if(rev==n)
        return true;
    return false;
    }
    
};
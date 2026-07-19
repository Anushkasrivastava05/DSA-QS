class Solution {
public:
    bool isPalindrome(int x) {
       int s=x;
        long long n=0;
        while(x>0){
           n=n*10+x%10;
           x/=10;       
            }
            if(s==n){
                return true;
            }
            return false;
    }
};

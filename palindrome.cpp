class Solution {
public:
    bool isPalindrome(int x) {
long int s=0;
        int d;
        int n=x;
        if(n<0)
        return false;
        while(x!=0){
            d=x%10;
            s=s*10+d;
            x=x/10;
        }
        if(s==n)
            return true;
        else 
            return false;
    }
};
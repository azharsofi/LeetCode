class Solution {
public:
    bool isPerfectSquare(int num) {
        int x=pow(num,0.5);
        if(x*x==num)
        return true;
        return false;
        
    }
};

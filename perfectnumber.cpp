class Solution {
public:
    bool checkPerfectNumber(int num) {
        int s=0;
        for(int i=1;i<num;i++){
            if(num%i==0)
            s=s+i;
        
        }
        if(s==num)
        return true;
        return false;
        
    }
};

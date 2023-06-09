
class Solution {
    private:
    void solve(string digits,string output,int index,vector<string> &ans,string map[]){
        if(index>=digits.length()){
            ans.push_back(output);
            return ;
        }
        int num=digits[index]-'0';
        string val=map[num];
        for(int i=0;i<val.length();i++){
            output.push_back(val[i]);
                  solve(digits,output,index+1,ans,map);
                  output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
        return ans;
        string output="";
        int index=0;
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,ans,map);
        return ans;
        
    }
};

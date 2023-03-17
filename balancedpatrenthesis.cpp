class Solution {
public:
    bool isValid(string x) {
        stack<char> s;
        for(int i=0;i<x.length();i++){
            char ch=x[i];
            
            
            if(ch== '('|| ch== '{'||ch=='['){
                s.push(ch);
                continue;
            }
            
            if(s.empty())
            return false;
            

                    char top=s.top();
                    if((ch==')'&&top=='(')||(ch=='}'&&top=='{')||(ch==']'&&top=='[')){
                    s.pop();}
                
                else{
                    return false;
                }
                
            }
            
        if(s.empty())
        return true;
        else 
        return false;
        
    }
};

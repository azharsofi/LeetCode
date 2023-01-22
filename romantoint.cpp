class Solution {
public:
    int romanToInt(string s) {
        map<char,int> map={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
};
int n=s.size();
int total=map[s.back()];
for(int i=n-2;i>=0;i--){
    if(map[s[i]]<map[s[i+1]])
    {
        total=total-map[s[i]];
    }
    else
    total+=map[s[i]];
}
   return total;     
    }
};

class Solution {
public:
    vector<int> constructRectangle(int area) {
        
        vector<int>a(2);
        int w=sqrt(area);
        while(area%w!=0){
            w--;
        }
        a[0]=area/w;
        a[1]=w;
        return a;
    }

};

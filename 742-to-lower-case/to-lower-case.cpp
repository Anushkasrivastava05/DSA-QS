class Solution {
public:
    string toLowerCase(string s) {
        string a =s;
        for(int i =0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90){
                 a[i]=a[i]+32;
            }
        }
        return a;
    }
};
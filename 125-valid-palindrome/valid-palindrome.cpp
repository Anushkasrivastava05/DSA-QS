class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122 ||s[i]>=48 && s[i]<=57){
                a.push_back(s[i]);
            }
        }
        for(int i=0;i<a.size();i++){
            if(a[i]>=65 && a[i]<=90){
                a[i]+=32;
            }
        }
        int st=0,end=a.size()-1;
        bool ispal=true;
        while(st<=end){
            if(a[st]==a[end]){
                st++;
                end--;
                ispal=true;
            }
            else{
            ispal=false;
            break;
            }
        }
        return ispal;
    }
};
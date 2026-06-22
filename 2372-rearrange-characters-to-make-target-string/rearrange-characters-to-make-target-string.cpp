class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>m1;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
        }

unordered_map<char,int>m2;
for(int i=0;i<target.size();i++){
    m2[target[i]]++;
}
int maxc=INT_MAX;
for(auto it:m2){
    char ch=it.first;
    int req=it.second;

int ava=m1[ch]/req;
maxc=min(maxc,ava);
}
return maxc;
    }
};
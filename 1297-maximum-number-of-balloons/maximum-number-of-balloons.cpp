class Solution {
public:
    int maxNumberOfBalloons(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        int max_ball=m['b'];
        max_ball=min(max_ball,m['a']);
        max_ball=min(max_ball,m['l']/2);
        max_ball=min(max_ball,m['o']/2);
        max_ball=min(max_ball,m['n']);
        
        return max_ball;
    }
};
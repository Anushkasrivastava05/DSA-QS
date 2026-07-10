class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int currp=0;
        int maxp=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            currp+=cardPoints[i];
        }
        maxp=currp;
        for(int i=0;i<k;i++){
            currp -= cardPoints[k - 1 - i];  
            currp += cardPoints[n - 1 - i];
            maxp=max(currp,maxp);
        }
        return maxp;
    }
};
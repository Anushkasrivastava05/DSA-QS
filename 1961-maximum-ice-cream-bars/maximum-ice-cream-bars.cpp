class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        sort(costs.begin(),costs.end());
        int sum=0;
        int count=0;
        if(coins<costs[0])return 0;
        for(int i=0;i<n;i++){
            if(sum<coins){
                sum+=costs[i];
                if(sum<=coins)
                count++;
            }
        }
        return count;
    }
};
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid ) {
        unordered_set<int>s;
        vector<int>ans;
        int a,b,n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            if(s.find(grid[i][j])!=s.end()){
                a=grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
        }
        int sum=0,sumi;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=grid[i][j];
            }
        }
        sumi=(n*n*((n*n)+1))/2;
        b=sumi-sum+a;
        ans.push_back(b);
        return ans;
    }
};
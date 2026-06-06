class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        vector<int>ans;
        int n=nums.size();
        int ls=0,rs=0;
        arr1.push_back(0);
        for(int i=1;i<n;i++){
            ls+=nums[i-1];
            arr1.push_back(ls);
        }
        
        for(int i=n-2;i>=0;i--){
            rs+=nums[i+1];
            arr2.push_back(rs);
        }
        reverse(arr2.begin(),arr2.end());
        arr2.push_back(0);
        for(int i=0;i<n;i++){
            ans.push_back(abs(arr1[i]-arr2[i]));
        }
             return ans;
    }
};
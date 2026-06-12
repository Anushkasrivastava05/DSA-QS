class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int i=nums[0],j=i+1;
        while(i<nums.size()){
            if( j< nums.size() && nums[i]==nums[j]){
                ans.push_back(nums[i]);
                i++;j++;

            }
            else{
                i++;j++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int element=0;
            for(int j=i;j<n;j++){
               if(nums[j]==target) element++;
               else element--;

               if(element>0){
                ans++;
               }
            }
        }
        return ans;
    }
};
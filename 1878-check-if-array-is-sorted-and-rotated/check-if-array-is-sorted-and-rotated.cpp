class Solution {
public:
    bool check(vector<int>& nums) {
      
             int i=0;
        int j=nums.size()-1;
        while(j>i){
bool moved=false;
            if(nums[i]<=nums[i+1]){
                i++;
                moved=true;
            }
            if(nums[j]>=nums[j-1]){
                j--;
                moved=true;
            }
            if(!moved){
                break;
            }
        }
        if(i+1==j && nums[0]>=nums[nums.size()-1]){
            return true;
        }
        if(i>=j){return true;
         } return false;
    }
    
};
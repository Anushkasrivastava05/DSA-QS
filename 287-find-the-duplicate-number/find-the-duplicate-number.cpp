class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
       // for(int i=1;i<nums.size();i++){
           // if(nums[i]==nums[i-1]){
                //return nums[i];
           // }
       // }
       // return nums[0];

       unordered_set<int> s;
       for(int val : nums){
        if(s.find(val)!=s.end()){
        return val;
       }
       s.insert(val);
       }
       return -1;
    }
};
#include <vector>
#include <unordered_set>

class Solution {
public:
    int missingInteger(std::vector<int>& nums) {
        // Step 1: Calculate the sum of the longest sequential prefix
        int sum = nums[0];
        int i = 1;
        while (i < nums.size() && nums[i] == nums[i - 1] + 1) {
            sum += nums[i];
            i++;
        }
        
        // Step 2: Store all array elements in a hash set for O(1) lookup
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        
        // Step 3: Find the smallest integer >= sum that is missing from nums
        int ans = sum;
        while (numSet.count(ans)) {
            ans++;
        }
        
        return ans;
    }
};
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        if (nums.size() < 2) {
            return 0;
            }

        auto [min_it, max_it] = std::minmax_element(nums.begin(), nums.end());
        
        int min_val = *min_it;
        int max_val = *max_it;
        long long best_subarray_value = max_val - min_val;
        return best_subarray_value * k;
        
    }
};
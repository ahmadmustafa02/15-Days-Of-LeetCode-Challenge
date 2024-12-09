class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int max_sum = nums[0];  // Initialize the max_sum as the first element
    int current_sum = nums[0];  // Initialize the current_sum as the first element

    for (int i = 1; i < nums.size(); i++) {
        current_sum = max(nums[i], current_sum + nums[i]);  // Include the current element or start fresh with the current element
        max_sum = max(max_sum, current_sum);  // Update the max_sum if the current_sum is larger
    }

    return max_sum;
    }
};
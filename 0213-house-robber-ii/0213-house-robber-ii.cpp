class Solution {
public:
    int robHelper(vector<int>& nums, int start, int end) {
    int prev2 = 0, prev1 = 0;
    for (int i = start; i <= end; i++) {
        int temp = max(prev1, prev2 + nums[i]);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}

int rob(vector<int>& nums) {
    if (nums.size() == 1) {
        return nums[0];
    }
    
    // Rob houses from index 0 to n-2 (excluding the last house)
    int robFirst = robHelper(nums, 0, nums.size() - 2);
    // Rob houses from index 1 to n-1 (excluding the first house)
    int robLast = robHelper(nums, 1, nums.size() - 1);

    // The result is the maximum of robbing the first or the last house
    return max(robFirst, robLast);
}

};
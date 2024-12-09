class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
    sort(nums.begin(), nums.end()); // Sort the array to handle duplicates easily and use two-pointer technique
    
    for (int i = 0; i < nums.size() - 2; ++i) {
        // Skip duplicate elements for the first number
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1, right = nums.size() - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicate elements for the second and third numbers
                while (left < right && nums[left] == nums[left + 1]) ++left;
                while (left < right && nums[right] == nums[right - 1]) --right;

                ++left;
                --right;
            } else if (sum < 0) {
                ++left; // Increase the sum by moving the left pointer
            } else {
                --right; // Decrease the sum by moving the right pointer
            }
        }
    }

    return result;
    }
};
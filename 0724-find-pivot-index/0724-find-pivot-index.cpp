class Solution {
public:
    int pivotIndex(vector<int>& nums) {
          int totalSum = 0, leftSum = 0;

    // Calculate the total sum of the array
    for (int num : nums) {
        totalSum += num;
    }

    // Traverse the array to find the pivot index
    for (int i = 0; i < nums.size(); ++i) {
        // Check if the left sum equals the right sum
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i; // Pivot index found
        }
        leftSum += nums[i]; // Update left sum
    }

    return -1; // No pivot index found
    }
};
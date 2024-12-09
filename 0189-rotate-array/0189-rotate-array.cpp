class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n = nums.size();
    k = k % n;  // In case k is larger than n
    if (k == 0) return;

    // Reverse the entire array
    reverse(nums.begin(), nums.end());

    // Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Reverse the remaining n-k elements
    reverse(nums.begin() + k, nums.end());
    }
};
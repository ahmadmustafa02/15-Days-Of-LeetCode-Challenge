class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
          int k = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k++] = nums[i];  // Place the element in the first k positions
        }
    }
    return k;

    }
};
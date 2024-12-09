class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;
    
    // First pass: find the candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }
    
    return candidate;
    }
};
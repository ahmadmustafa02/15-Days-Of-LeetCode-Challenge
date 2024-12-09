class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
    
    // Start from the rightmost digit and increment it
    for (int i = n - 1; i >= 0; --i) {
        // If the current digit is less than 9, just increment it and return the result
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        
        // If the current digit is 9, set it to 0 and continue to the next digit
        digits[i] = 0;
    }
    
    // If all digits were 9, we need to add a 1 at the beginning
    digits.insert(digits.begin(), 1);
    return digits;

    }
};
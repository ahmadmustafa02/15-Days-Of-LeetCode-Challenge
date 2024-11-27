class Solution {
public:
    string reverseStr(string s, int k) {
            int n = s.length();

    for (int i = 0; i < n; i += 2 * k) {
        int left = i;                    // Start of the chunk
        int right = min(i + k - 1, n - 1); // End of the first k characters or end of string

        // Reverse the first k characters manually
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    return s;
}

    
};
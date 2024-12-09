class Solution {
public:
    int firstUniqChar(string s) {
         unordered_map<char, int> char_count;

    // Count the frequency of each character in the string
    for (char c : s) {
        char_count[c]++;
    }

    // Find the first character with a count of 1
    for (int i = 0; i < s.size(); i++) {
        if (char_count[s[i]] == 1) {
            return i;  // Return the index of the first unique character
        }
    }

    return -1;  // Return -1 if no unique character exists
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false; // If lengths differ, not anagrams

    vector<int> charCount(26, 0); // Array to store character counts (for 'a' to 'z')

    // Count characters in both strings
    for (int i = 0; i < s.length(); ++i) {
        charCount[s[i] - 'a']++; // Increment count for character in s
        charCount[t[i] - 'a']--; // Decrement count for character in t
    }

    // Check if all counts are zero
    for (int count : charCount) {
        if (count != 0) return false;
    }

    return true;
  
    }
};
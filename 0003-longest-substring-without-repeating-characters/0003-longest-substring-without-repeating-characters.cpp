class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char, int> charIndexMap;
    int maxLength = 0, left = 0;

    for (int right = 0; right < s.length(); ++right) {
        // If the character is already in the map and its index is greater than or equal to 'left'
        if (charIndexMap.find(s[right]) != charIndexMap.end() && charIndexMap[s[right]] >= left) {
            left = charIndexMap[s[right]] + 1; // Move 'left' to the right of the previous occurrence
        }
        charIndexMap[s[right]] = right; // Update or add the character's latest index
        maxLength = max(maxLength, right - left + 1); // Update the max length of the substring
    }

    return maxLength;
    }
};
class Solution {
public:
    char findTheDifference(string s, string t) {
         unordered_map<char, int> count_map;

    // Count frequency of characters in string s
    for (char ch : s) {
        count_map[ch]++;
    }

    // Find the character in t that does not match the count in s
    for (char ch : t) {
        if (--count_map[ch] < 0) {
            return ch; // This is the extra character
        }
    }

    return '\0'; // This line is never reached, as the problem guarantees one extra character in t
    }
};
class Solution {
public:
    int lengthOfLastWord(string s) {
            int length = 0;       // To store the length of the last word
    int i = s.size() - 1; // Start from the end of the string

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count the length of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.empty()) return "";

    string prefix = strs[0]; // Start with the first string as the initial prefix

    for (int i = 1; i < strs.size(); ++i) {
        // Compare the current prefix with each string
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.size() - 1); // Shorten the prefix
            if (prefix.empty()) return ""; // If no common prefix, return ""
        }
    }

    return prefix;
    }
};
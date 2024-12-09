class Solution {
public:
    int strStr(string haystack, string needle) {
         size_t pos = haystack.find(needle); // Find the first occurrence of needle in haystack
    return (pos != string::npos) ? pos : -1; // If found, return position; otherwise, return -1
    }
};
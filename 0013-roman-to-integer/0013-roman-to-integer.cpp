class Solution {
public:
    int romanToInt(string s) {
        // Define a map to store the Roman numerals and their corresponding values
    unordered_map<char, int> roman_map = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;
    
    // Iterate through the string and process each character
    for (int i = 0; i < s.length(); i++) {
        // If current character is less than the next character, subtract its value
        if (i + 1 < s.length() && roman_map[s[i]] < roman_map[s[i + 1]]) {
            result -= roman_map[s[i]];
        } else {
            result += roman_map[s[i]];
        }
    }

    return result; 
    }
};
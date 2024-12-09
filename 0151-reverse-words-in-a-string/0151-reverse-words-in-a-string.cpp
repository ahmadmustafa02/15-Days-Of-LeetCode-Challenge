class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
    string word;
    vector<string> words;
    
    // Split the string into words
    while (ss >> word) {
        words.push_back(word);
    }
    
    // Reverse the words
    reverse(words.begin(), words.end());
    
    // Join the words into a single string
    string result;
    for (int i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i < words.size() - 1) {
            result += " ";
        }
    }
    
    return result;  
    }
};
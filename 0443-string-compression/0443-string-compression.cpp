class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int writeIndex = 0;  // This is where we write the compressed result.
        int readIndex = 0;   // This is where we read the characters in the array.

        while (readIndex < n) {
            char currentChar = chars[readIndex];
            int count = 0;

            // Count the number of occurrences of the current character.
            while (readIndex < n && chars[readIndex] == currentChar) {
                count++;
                readIndex++;
            }

            // Write the current character.
            chars[writeIndex++] = currentChar;

            // If the count is greater than 1, write the count as well.
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[writeIndex++] = c;
                }
            }
        }

        return writeIndex;  // Return the new length of the array.
    
    }
};
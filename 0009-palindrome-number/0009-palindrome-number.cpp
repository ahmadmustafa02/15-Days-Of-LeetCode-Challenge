class Solution {
public:
    bool isPalindrome(int x) {
         // If the number is negative or ends with 0 but is not 0, it can't be a palindrome
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    // Check if the number is equal to its reverse
    return x == reversed || x == reversed / 10;
    }
};
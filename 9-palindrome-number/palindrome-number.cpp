class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long tmp = x, reversedNum = 0;
        while (tmp > 0) {
            int lastDigit = tmp % 10;
            reversedNum = reversedNum * 10 + lastDigit;
            tmp /= 10;
        }
        return x == reversedNum;
    }
};
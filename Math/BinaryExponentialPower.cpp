// https://leetcode.com/problems/powx-n/description/
class Solution {
public:
    double myPow(double x, int n) {
        if (x == 0)
            return 0.0;
        if (n == 1)
            return x;
        if (n == 0)
            return 1.0;

        long binary = n;
        double result = 1;
        if (n < 0) {
            binary = -binary;
            x = 1 / x;
        }

        while (binary > 0) {
            if (binary % 2 == 1) {
                result *= x;
            }
            x *= x;
            binary /= 2;
        }
        return result;
    }
};
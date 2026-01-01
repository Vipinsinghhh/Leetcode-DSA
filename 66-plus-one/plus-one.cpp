class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        // Traverse from the last digit
        for(int i = n - 1; i >= 0; i--) {

            // If current digit is not 9, simply add 1 and return
            if(digits[i] != 9) {
                digits[i]++;
                return digits;
            }

            // If digit is 9, it becomes 0 (carry goes left)
            digits[i] = 0;
        }

        // If all digits were 9 (like 9, 99, 999)
        digits.insert(digits.begin(), 1);

        return digits;
    }
};

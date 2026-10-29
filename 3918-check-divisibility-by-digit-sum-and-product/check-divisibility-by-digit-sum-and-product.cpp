class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        int sum = 0;
        int product = 1;

        while(x != 0){
            int la_digit = x%10;
            sum += la_digit;
            product *= la_digit;
            x/=10;
        }

        if(n % (product + sum) == 0) return true;
        else return false;
    }
};
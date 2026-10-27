class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        while(n != 0){
            int last_digit = n%10;
            sum += last_digit;
            product *= last_digit;

            n/=10;
        }

        return product - sum;
    }
};
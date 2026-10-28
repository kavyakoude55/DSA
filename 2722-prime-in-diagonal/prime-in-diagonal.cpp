class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int prime = 0;
        for(int i=0; i<nums.size(); i++){
            int a = nums[i][i];
            int b = nums[i][nums.size() - i - 1];

            if(isPrime(a) && a > prime){
                prime = a;
            }
            if (isPrime(b) && b > prime) {
                prime = b;
            }
        }
        return prime;
    }

    bool isPrime(int n){
        if(n < 2) return false;
        for(int i=2; i*i<=n; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
};
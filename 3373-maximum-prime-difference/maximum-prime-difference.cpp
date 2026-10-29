class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {

        vector<int>primeIndex;
        for(int x=0; x<nums.size(); x++){
            if(isPrime(nums[x])){
                primeIndex.push_back(x);
            }
        }
        int n = primeIndex.size();
        return abs(primeIndex[n - 1] - primeIndex[0]);
    }

    bool isPrime(int n){
        if(n < 2){
            return false;
        }

        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};
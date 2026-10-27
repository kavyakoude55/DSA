class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int x: nums){
            int numCount = 0;
            while(x != 0){
                numCount++;
                x /= 10;
            }
            if(numCount % 2 == 0){
                count++;
            }

        }
        return count;
    }
};
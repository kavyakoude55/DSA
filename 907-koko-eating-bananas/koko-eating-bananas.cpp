class Solution {
public:

    int maxNum(vector<int> &piles){
        int maxi = INT_MIN;
        int n = piles.size();
        for(int i=0; i<n; i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long findTotalHours(vector<int> &piles, int hourly){
        long long totalHours = 0;
        for(int i=0; i<piles.size(); i++){
            totalHours += ceil((double)piles[i] / (double)hourly);
        }
        return totalHours;
    }

    int minEatingSpeed(vector<int> &piles, int h) {
        int low = 1;
        int high = maxNum(piles);
        int ans = high;

        while(low <= high){
            int mid = (low + high)/2;
            long long totalHrs = findTotalHours(piles, mid);
            if(totalHrs <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
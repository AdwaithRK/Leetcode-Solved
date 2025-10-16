class Solution {
    
bool isStrictlyIncrease(vector<int>& increasing, int k ){
    
    for(int i = 0; i <= increasing.size() - 2*k; i++){
        if(increasing[i] >= k && increasing[i+k] >= k) return true;
    }

    return false;
}

public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        vector<int> increasing(nums.size(), 1);

        for(int i = nums.size() - 1; i > 0; i--){
            if(nums[i] > nums[i-1]){
                increasing[i-1] = increasing[i] + 1;
            }
        }

        int start = 1, end = nums.size()/2;
        int ans = 1;
        while(start <= end){
            int mid = start + (end - start)/2;

            if(isStrictlyIncrease(increasing, mid)){
                ans = mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        return ans;

    }
};
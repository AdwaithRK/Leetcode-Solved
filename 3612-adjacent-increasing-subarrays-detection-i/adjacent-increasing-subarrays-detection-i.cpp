class Solution {

bool isStrictlyIncreasing(vector<int>& increasing, int i, int k){
    
    if(increasing[i + k] >= k && increasing[i] >= k) return true;


    return false;
}
    



public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        vector<int> increasing(nums.size(), 1);

        for(int i = nums.size() - 1; i >= 1; i--){
            if(nums[i] > nums[i-1]){
                increasing[i-1] = increasing[i] + 1;
            }
        }

        for(int i = 0; i <= nums.size() - 2*k; i++){
            if(isStrictlyIncreasing(increasing, i, k)){
                return true;
            }
        }

        return false;

    }
};
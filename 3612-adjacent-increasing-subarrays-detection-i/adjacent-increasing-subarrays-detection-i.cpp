class Solution {

    bool isStrictlyIncreasing(vector<int>& nums, int start, int end){
        
        for(int i = start; i <= end-1; i++){
            if(nums[i] >= nums[i+1]) return false; 
        }

        return true;
    }


public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        if( k == 1) return true;

        if(nums.size() < 2*k) return false;
        
        for(int i = 0; i < nums.size() - 2*k + 1 ; i++){
            bool first = isStrictlyIncreasing(nums, i, i + k - 1);
            bool second = isStrictlyIncreasing(nums, i + k, i + 2*k -1);
            if(first && second) return true;
        }

        return false;
    }
};
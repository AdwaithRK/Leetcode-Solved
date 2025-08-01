class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        sort(nums.begin(), nums.end());

        int left = 0, right = nums.size() - 1;

        while(left < right){
            if(nums[left] + nums[right] >= target) right--;
            else{
                count += right - left;
                left++;
            }
        }


        return count;
    }
};
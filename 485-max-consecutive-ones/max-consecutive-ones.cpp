class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int max_lenght = 0;

        while(right < nums.size())
        {
            if(nums[right] == 1) {
                max_lenght = max(max_lenght, right - left + 1);
                right++;
            }
            else{
                right++;
                left = right;
            }
        }
        
        return max_lenght;
    }
};
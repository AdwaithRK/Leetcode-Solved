class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxJumpIndex = 0;

        for(int i = 0; i < nums.size(); i++){

            if(i > maxJumpIndex) return false;

            if(nums[i] + i > maxJumpIndex) maxJumpIndex = nums[i] + i;
        }

        return true;
    }
};
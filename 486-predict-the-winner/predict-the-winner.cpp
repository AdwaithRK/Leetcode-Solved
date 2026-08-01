class Solution {
public:
    int solve(int i, int j, vector<int>& nums) {
        if (i == j)
            return nums[i];

        int pickLeft = nums[i] - solve(i + 1, j, nums);
        int pickRight = nums[j] - solve(i, j - 1, nums);

        return max(pickLeft, pickRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        return solve(0, nums.size() - 1, nums) >= 0;
    }
};
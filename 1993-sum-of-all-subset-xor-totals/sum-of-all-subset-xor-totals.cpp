class Solution {
    int dfs(int index, int xor_value, vector<int>& nums){
        if(index == nums.size()) return xor_value;

        int a = dfs(index + 1, xor_value, nums) + dfs(index + 1, xor_value ^ nums[index], nums);

        return a;
    }
public:
    int subsetXORSum(vector<int>& nums) {
        return dfs(0, 0, nums);
    }
};
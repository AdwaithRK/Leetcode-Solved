class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long int final_xor = nums[0];
        
        for(int i = 1; i < nums.size(); i++) final_xor ^= nums[i];

        long int differing_bit = final_xor & -final_xor;

        int first_digit = 0, second_digit = 0;

        for(int num : nums){
            if(num & differing_bit) first_digit ^= num;
            else second_digit ^= num;
        }

        return {first_digit, second_digit};
    }
};
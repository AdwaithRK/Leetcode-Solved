class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {

        int ans = 0;

        for(auto num : nums){
            if( (num & 1) == 0) ans |= num;
        }
        
        return ans;
    }
};
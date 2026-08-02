class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int even_count = 0;

        for(auto element : nums){
            if((element & 1) == 0) even_count++;
        }
        
        if(even_count >= 2) return true;

        return false;
    }
};
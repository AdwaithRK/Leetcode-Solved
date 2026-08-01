class Solution {
public:
    bool divideArray(vector<int>& nums) {
        bitset<501> num_map;

        for(auto num : nums){
            num_map.flip(num);
        }
        
        return num_map.none();
    }
};
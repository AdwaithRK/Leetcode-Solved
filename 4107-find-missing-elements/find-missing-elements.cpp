class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        set<int> ss;
        vector<int> ans;
        int maxe = INT_MIN;
        int mine = INT_MAX;

        for(int i = 0; i < nums.size(); i++){
            ss.insert(nums[i]);
            maxe = max(maxe, nums[i]);
            mine = min(mine, nums[i]);
        }


        for(int i = mine; i < maxe; i++){
            if(ss.count(i) == 0){
                ans.push_back(i);
            } 
        }
        
        return ans;
    }
};
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        unsigned long long realnum = 0;
        vector<bool> ans; 

        for(int i = 0; i < nums.size(); i++){
            realnum = realnum * 2 + nums[i];
            realnum = realnum % 5;
            ans.push_back(realnum == 0);
        }

        return ans;
    }
};
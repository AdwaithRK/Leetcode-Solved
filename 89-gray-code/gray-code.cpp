class Solution {
public:
    vector<int> grayCode(int n) {

        vector<int> ans = {0};

        for(int i = 0; i < n; i++){
            int add = 1 << i;
            for(int i = ans.size() - 1; i >= 0; i--){
                ans.push_back(add | ans[i]);
            }
        }
        
        return ans;
    }
};
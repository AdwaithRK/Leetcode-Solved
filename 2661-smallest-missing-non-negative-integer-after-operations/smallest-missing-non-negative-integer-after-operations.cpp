class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        vector<int> res(nums.size(), 0);

        unordered_map<int, int> count_map;

        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] < 0)
                nums[i] = nums[i] % value + value;
            
            res[i] = nums[i] % value;

            count_map[res[i]]++;
        }
        for(int i=0; i < res.size(); i++) cout << res[i] << "\t";


        int k = 0, ans = 0;

        while(1){
            if(count_map[k] > 0){
                count_map[k]--;
            }else{
                break;
            }
            ans++;
            k = ans % value;
        }

        return ans;
    }
};
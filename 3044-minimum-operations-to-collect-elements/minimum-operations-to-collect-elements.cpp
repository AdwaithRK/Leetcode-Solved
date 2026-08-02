class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        bitset<51> mapi;


        for(int i = nums.size() -1; i>= 0; i--){
            if(nums[i] <= k){ 
                //cout << "setting : " << i << "\n";
                mapi.set(nums[i]); 
            }

            if(mapi.count() == k){
                return nums.size() - i;
            }
        }

        return 0;
    }
};
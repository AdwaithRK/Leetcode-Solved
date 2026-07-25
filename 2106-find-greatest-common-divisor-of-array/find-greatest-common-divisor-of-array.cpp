class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small = INT_MAX, max = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < small){
                small = nums[i];
            }

            if(nums[i] > max){
                max = nums[i];
            }
        } 

        int max1, small1;

        while(small != 0){
            max1 = small;
            small1 = max % small;

            max = max1, small = small1;
        }
        
        return max;
    }
};
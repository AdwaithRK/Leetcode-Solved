class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int product = INT_MIN, temp_product;
        int num_size = nums.size();

        int window[4][3] = {
           // {0, 1, 2},
            {num_size - 1, 0, 1},
           // {num_size - 2, num_size - 1, 0},
            {num_size - 3, num_size - 2, num_size - 1}
        };

        sort(nums.begin(), nums.end());

        for(int i = 0; i < 4; i++){
            temp_product = nums[window[i][0]] * nums[window[i][1]] * nums[window[i][2]];

            if(temp_product > product) product = temp_product;
        }
        
        return product;
    }
};
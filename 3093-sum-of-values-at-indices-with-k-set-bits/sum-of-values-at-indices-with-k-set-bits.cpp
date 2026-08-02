class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {

        int sum = 0;

        for(int i = 0; i < nums.size(); i++){

            int temp = i;
            int set_bits = 0;
            while(temp != 0 && !(set_bits > k)){
                if(temp & 1) set_bits++;

                temp >>= 1;
            }

            if(set_bits == k){
               // cout << nums[i] << "\n";
                sum += nums[i];
            }

        }
        
        return sum;
    }
};
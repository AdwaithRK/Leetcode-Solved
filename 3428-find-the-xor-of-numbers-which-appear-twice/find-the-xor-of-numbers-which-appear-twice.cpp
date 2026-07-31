class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        long temp = 0;
        long sum = 0;

        for(long num : nums){

           if( (temp >> num) & 1LL ) sum ^= num;

           temp |= (1LL << num);
        }
        
        return sum;
    }
};
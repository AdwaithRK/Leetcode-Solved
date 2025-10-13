class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
       int ans = 0;
       vector<int> frequency(101, 0);
       
       for (int i = 0; i < nums.size(); i++){
            frequency[nums[i]]++;
       }

        for(int i = 1; i <= 100; i++){
            
            if(frequency[i] % k == 0){
                ans += i * frequency[i];
            } 
        }

        return ans;
    }
};
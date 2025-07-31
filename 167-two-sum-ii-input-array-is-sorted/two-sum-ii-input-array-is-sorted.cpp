class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0, first, second, sum;
        int end = numbers.size() - 1;

        while(start < end){
            first = numbers[start];
            second = numbers[end];
            sum = first + second;
            if(sum == target) return {start+1, end+1};
            else if( sum < target) start++;
            else end--;
        }
        
        return {-1, -1};
    }
};
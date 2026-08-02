class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {

        int sum = 0;
        int start = n - k >= 0 ? n - k : 0;      

        for(int i = start; i <= n + k; i++){
            if( (n & i) == 0 ) sum += i;
        }  

        return sum;
    }
};
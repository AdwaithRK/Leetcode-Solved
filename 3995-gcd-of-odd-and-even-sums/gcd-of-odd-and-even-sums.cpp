class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        int odd = 1, even = 2;
        int oddSum = 1, evenSum = 2;

        for(int i = 1; i < n; i++){
            odd += 2;
            even += 2;
            oddSum += odd;
            evenSum += even;
        }


        int small, max, small1, max1;

        if(evenSum < oddSum){
            small = evenSum;
            max = oddSum;
        }else{
            small = oddSum;
            max = evenSum;
        }


        while(small != 0){
            max1 = small;
            small1 = max % small;

            max = max1, small = small1;
        }

        return max;
    }
};
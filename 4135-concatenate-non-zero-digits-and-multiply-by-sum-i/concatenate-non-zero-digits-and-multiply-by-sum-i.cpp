class Solution {
public:
    long long sumAndMultiply(int n) {

        long long current_num, sum = 0, new_num = 0, multiplier = 1;

        while(n != 0){
            current_num = n % 10;

            if(current_num != 0){
                sum += current_num;
                new_num = current_num * multiplier + new_num;
                multiplier = multiplier * 10;
            }

            n = n/10; 
        }

        return new_num * sum;
        
    }
};
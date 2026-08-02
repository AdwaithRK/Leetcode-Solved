class Solution {
    bool isPrime(int n){
        if(n == 1) return false;

        for(int i = 2; i * i <= n; i++){
            if((n % i) == 0) return false;
        }
        
        return true;
    }

public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;

        for(int j = left; j <= right; j++){
            int set_count = 0;

            int temp = j;

            while(temp != 0){
                if(temp & 1) set_count++;

                temp = temp >> 1;
            }

            if(isPrime(set_count)) count++;

        }
        
        return count;
    }
};
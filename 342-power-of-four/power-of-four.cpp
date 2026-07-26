class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n == 1) return true;

        if(n & 1) return false;

        int shift_count = 0;

        while(n != 0){
            n = n >> 1;
            shift_count++;
            if(n & 1){
                if(n != 1) return false;
                if(shift_count % 2 == 0) return true;
                return false;
            }
        }

        return false;
    }
};
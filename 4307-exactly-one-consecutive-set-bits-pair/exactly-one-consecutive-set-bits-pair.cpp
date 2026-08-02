class Solution {
public:
    bool consecutiveSetBits(int n) {
        int adjacent_pair = 0;

        while (n != 0){
            if( (n & 1) & ((n>> 1) & 1) ) adjacent_pair++;

            n = n >> 1;
        }

        if(adjacent_pair == 1) return true;

        return false;
        
    }
};
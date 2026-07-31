class Solution {
public:
    int binaryGap(int n) {
        bool found_one = false;
        int count = 0;
        int ans = 0;
        while(n != 0) {

            if(found_one)
                count++;
            
            if(n & 1) {
                
                if(found_one){
                    ans = max(ans, count);
                    count = 0;
                }
                else{
                    found_one = true;
                }
            }

            n = n >> 1;
        }
        
        return ans;
    }
};
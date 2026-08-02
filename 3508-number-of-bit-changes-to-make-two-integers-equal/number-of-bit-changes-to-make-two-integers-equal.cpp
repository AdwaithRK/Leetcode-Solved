class Solution {
public:
    int minChanges(int n, int k) {

        int count = 0;

        int xorv = n ^ k;

        printf("xor : %b \n", xorv);

        int pos = 0;

        while(xorv >> pos) {
            int bit = (xorv >> pos) & 1;

            if(bit){
                int value = (n >> pos) & 1;
                int value1 = (k >> pos) & 1;


                if(value == 1 && value1 == 0 ){
                    count++;
                }
                else return -1;
            }

            pos++;
        }
        
        return count;
    }
};
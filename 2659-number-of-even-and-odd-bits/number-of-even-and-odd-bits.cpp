class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even_count = 0, odd_count = 0;

        int index = 0;

        while((n >> index) > 0){
            if((n >> index) & 1){
                if(index % 2) odd_count++;
                else even_count++;
            }
            index++;
        }

        return {even_count, odd_count};
    }
};
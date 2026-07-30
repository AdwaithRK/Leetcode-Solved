class Solution {
public:
    int minimumPushes(string word) {

        int size = word.size();
        int press = 1, count = 0;
        while(size > 0){
            if(size > 8){
                count += (press * 8);
                size = size - 8;
            }
            else {
                count += (press * size);
                size = 0;
            }
            press++;
        }
        
        return count;
    }
};
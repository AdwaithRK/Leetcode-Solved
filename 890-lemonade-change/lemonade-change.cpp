class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int count_5 = 0, count_10 = 0;

        for(auto bill : bills){

            if(bill == 5){
                count_5++;
            }

            if(bill == 10){

                if(count_5 > 0){
                    count_5--;
                    count_10++;
                }
                else{
                    return false;
                } 
            }

            if(bill == 20){
                if(count_5 > 0 && count_10 > 0){
                    count_5--;
                    count_10--;
                }
                else if(count_5 >= 3){
                    count_5 = count_5 - 3;
                }
                else{
                    return false;
                }
            }
        }
        
        return true;
    }
};
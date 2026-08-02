class Solution {
public:
    int smallestNumber(int n) {

        int count = 0;



        while( n > ( (1 << count) - 1)){
            count++;
        }

        cout << (1 << count ) << "\n";

        return (1 << count) - 1;
        
    }
};
class Solution {
public:
    long int divide(int dividend1, int divisor1) {
        long int dividend = dividend1;
        long int divisor = divisor1;
        long long answer = 0;
        bool is_positive = true;

        if(dividend < 0){
            is_positive = !is_positive;
            dividend = -1 * dividend;
        }

        if(divisor < 0){
            is_positive = !is_positive;
            divisor = -1 * divisor;
        }

        if(divisor == 1){
            cout << "sign : " << is_positive << "\n";
            cout << "dividend : " << dividend << "\n";
            if(dividend == 2147483648 && is_positive) return 2147483647;
            else if(dividend == -2147483648 && is_positive) return 2147483647;
            return is_positive ? dividend : -1 * dividend;
        }

        while(dividend >= divisor){
            dividend = dividend - divisor;
            answer++;
        }

        cout << "sign : " << is_positive << "\n";
        
        return is_positive ? answer : -1*answer;
    }
};
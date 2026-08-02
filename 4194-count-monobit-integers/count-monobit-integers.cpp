class Solution {
public:
    int countMonobit(int n) {
        int ans = 0;

        for(int i = 0; i <= n; i++){
            int temp = i;
            bool flag = true;

            if(i < 2) {
                ans++;
                continue;
            }


            while(temp >= 2){
                int first = temp & 1;
                int second = (temp >> 1) & 1;

                if( !(first & second)){
                   // cout << i << "\n";
                    flag = false;
                    break;
                }

                temp >>= 1;

            }
            if(flag) ans++;
        }

        return ans;
        
    }
};
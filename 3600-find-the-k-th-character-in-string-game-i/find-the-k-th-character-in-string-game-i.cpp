class Solution {
public:
    char kthCharacter(int k) {
        string p = "a";

        while(p.size() <= k){
            string temp = p;

            for(int i = 0; i < temp.size(); i++){
                temp[i] = temp[i] + 1;
            }

            p += temp;
        }

        return p[k-1];
    }
};
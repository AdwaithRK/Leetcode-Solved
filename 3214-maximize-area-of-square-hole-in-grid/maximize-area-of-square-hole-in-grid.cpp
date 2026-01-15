class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {

        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());

        int hMax = 1, hCurr = 1, vMax = 1, vCurr = 1;

        for(int i = 1; i < hBars.size(); i++){
            if(hBars[i] == hBars[i-1] + 1){
                hCurr++;
            }
            else{
                hCurr = 1;
            }
            hMax = max(hMax, hCurr);
        }

        for(int i = 1; i < vBars.size(); i++){
            if(vBars[i] == vBars[i-1] + 1){
                vCurr++;
            }
            else{
                vCurr = 1;
            }
            vMax = max(vCurr, vMax);
        }

        int side = min(vMax, hMax) + 1;
        return side * side;
    }
};
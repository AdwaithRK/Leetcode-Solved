class Solution {
    int maxDiff(int start, int end, vector<int>& piles, vector<vector<int>>& DP){

        if(DP[start][end] != -1) return DP[start][end];
        if(start == end) return piles[start];

        int left = piles[start] - maxDiff(start + 1, end, piles, DP);
        int right = piles[end] - maxDiff(start, end - 1, piles, DP);

        return DP[start][end] = max(left, right);
    }
public:
    bool stoneGame(vector<int>& piles) {
        
        vector<vector<int>> DP(piles.size(), vector<int>(piles.size(), -1));

        int ans = maxDiff(0, piles.size() - 1, piles, DP);

        return ans >= 0 ? true : false;
    }
};
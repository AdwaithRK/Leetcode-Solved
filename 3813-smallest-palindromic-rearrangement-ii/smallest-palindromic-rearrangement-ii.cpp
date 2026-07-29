class Solution {
public:
    static constexpr int MAX = 1000001;

    string smallestPalindrome(string s, int k) {
        vector<int> cnt(26);

        for (char c : s)
            cnt[c - 'a']++;

        vector<int> half(26);
        string mid = "";

        for (int i = 0; i < 26; i++) {
            half[i] = cnt[i] / 2;
            if (cnt[i] & 1)
                mid.push_back(char('a' + i));
        }

        if (countWays(half) < k)
            return "";

        string left;

        int len = accumulate(half.begin(), half.end(), 0);

        while (len--) {

            for (int c = 0; c < 26; c++) {

                if (half[c] == 0)
                    continue;

                half[c]--;

                long long ways = countWays(half);

                if (ways >= k) {
                    left.push_back(char('a' + c));
                    break;
                }

                k -= ways;
                half[c]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }

private:

    long long countWays(vector<int>& half) {
        int total = 0;
        for (int x : half)
            total += x;

        long long ans = 1;

        for (int f : half) {
            ans *= nCk(total, f);
            if (ans >= MAX)
                return MAX;
            total -= f;
        }

        return ans;
    }

    long long nCk(int n, int k) {

        if (k > n)
            return 0;

        k = min(k, n - k);

        long long ans = 1;

        for (int i = 1; i <= k; i++) {

            ans = ans * (n - i + 1) / i;

            if (ans >= MAX)
                return MAX;
        }

        return ans;
    }
};
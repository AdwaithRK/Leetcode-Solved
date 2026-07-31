class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);

        for(auto character : word){
            freq[character - 'a']++;
        }

        sort(freq.begin(), freq.end(), greater<int>());

        int count = 0;
        int ans = 0;
        for(int element: freq){
            count++;
          //  cout << "element : " << element << "count : " << count << "\n";
            ans += element * ((count-1)/8 + 1);
           // cout << element << " * " << (count / 8 ) + 1 << "\n";
        }        

        return ans;
    }
};
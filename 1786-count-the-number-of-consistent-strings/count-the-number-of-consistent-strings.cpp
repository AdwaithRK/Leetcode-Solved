class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        vector<int> map(26, 0);
        int false_count = 0;
        for(auto character : allowed) map[character - 'a'] = 1;

        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words[i].size(); j++){
                if(!map[words[i][j] - 'a']){ 
                    false_count++;
                    break; 
                }
            }
        }
        
        return words.size() - false_count;
    }
};
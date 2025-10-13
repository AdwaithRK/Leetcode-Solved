class Solution {
    bool isAnagram(string word1, string word2){

        if(word1.size() != word2.size()) return false;
        
        unordered_map<char, int> word_count;
        int i = 0, j = 0;

        while(i < word1.size()){
            word_count[word1[i++]]++;
        }

        while(j < word2.size()){
            if(word_count[word2[j]] > 0){
                word_count[word2[j++]]--;
            }
            else {
                return false;
            }
        }

        return true;
    }
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result_string = {words[0]};

        for(int i = 1; i < words.size(); i++){
            if(isAnagram(words[i], words[i-1])){
                continue;
            }
            result_string.push_back(words[i]);
        }

        return result_string;
    }
};
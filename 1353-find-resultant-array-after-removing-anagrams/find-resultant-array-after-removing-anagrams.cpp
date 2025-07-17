class Solution {
    bool isAnagram(string A, string B){
        if(A.size() != B.size()) return false;

        int character[26] = {0};

        for(int i = 0; i < A.size(); i++){
            character[A[i] - 'a']++;
        }

        for(int i = 0; i < B.size(); i++){
            if(character[B[i] - 'a'] > 0) {
                character[B[i] - 'a']--;
            }
            else return false;
        }

        return true;
    }

public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        int i = 0;

        while(i + 1 < words.size())
        {
            if(isAnagram(words[i], words[i+1]))
            {
              words.erase(words.begin() + i + 1);  
            }
            else
            {
                i++;
            }
        }
        

        return words;
    }
};
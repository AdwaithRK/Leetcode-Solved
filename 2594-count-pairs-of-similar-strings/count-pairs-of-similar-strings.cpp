class Solution {
public:
    int similarPairs(vector<string>& words) {
        
        unordered_map<string, int> character_bitmap;

        int bitmap = 0, count = 0;
        for(auto word : words){
            bitmap = 0;
            for(auto character : word){
                bitmap |= (1 << (character - 'a'));
            }
            character_bitmap[word] = bitmap;
        }

        for(int i = 0; i < words.size(); i++)
        {
            for(int j = i + 1; j < words.size(); j++){
                if( !(character_bitmap[words[i]]^character_bitmap[words[j]]) ){
                    count++;
                }
            }
        }

        return count;
    }
};
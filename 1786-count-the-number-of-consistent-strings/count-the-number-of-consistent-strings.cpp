class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int allowedMask = 0, wordMask = 0, ans = 0;

        for(auto character : allowed){
            allowedMask |= (1 << (character - 'a') );
        }


        for(auto word : words){
            wordMask = 0;
            for(auto character : word){
                wordMask |= (1 << (character - 'a') ); 
            }

            if( (wordMask & allowedMask) == wordMask) ans++;
        }
        
        return ans;
    }
};
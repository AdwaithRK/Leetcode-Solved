class Solution {
public:
    char repeatedCharacter(string s) {
        int bitmap = 0;

        for(auto character : s){
            if(bitmap & (1 << (character - 'a'))) return character;

            bitmap |= (1 << (character - 'a'));
        }
        
        return 0;
    }
};
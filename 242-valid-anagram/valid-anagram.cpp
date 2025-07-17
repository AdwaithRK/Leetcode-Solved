class Solution {
public:
    bool isAnagram(string s, string t) {
        string max_string, min_string;
        unordered_map<char, int> character_map; 

        if(s.size() > t.size())
        {
            max_string = s;
            min_string = t;
        }
        else
        {
            max_string = t;
            min_string = s;
        }


        for(int i = 0; i < min_string.size(); i++)
        {
            character_map[min_string[i]]++;
        }

        for(int i = 0; i < max_string.size(); i++)
        {
            if(character_map[max_string[i]] > 0)
            {
                character_map[max_string[i]]--;
            }
            else return false;
        }

        return true;
    }
};
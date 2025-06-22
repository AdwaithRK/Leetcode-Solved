class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        int moves = 0;

        while(i < j)
        {
            
            if(s[i] != s[j])
            {
                bool found_element = false;   
                for(int k = j; k > i; k--)
                {
                    if(s[k] == s[i])
                    {
                        found_element = true;
                        for(int m = k; m < j; m++)
                        {
                            swap(s[m], s[m+1]);
                            moves++;
                        }
                        j--;
                        break;
                    }
                }

                if(!found_element)
                {
                    moves += (s.size()/2 - i);
                }
                
                i++;
            }
            else{
                i++, j--;
            }
        }

        return moves;        
    }
};
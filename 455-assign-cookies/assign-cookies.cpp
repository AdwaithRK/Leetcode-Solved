class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        vector<int> temp_greed = g;
        vector<int> temp_size = s;

        sort(temp_greed.begin(), temp_greed.end());
        sort(temp_size.begin(), temp_size.end());

        int greed_index = 0;
        int size_index = 0;

        while(size_index < temp_size.size() && greed_index < temp_greed.size()){

            if(temp_size[size_index] >= temp_greed[greed_index]){
                greed_index++;
            }

            size_index++;
        }
        
        return greed_index;
    }
};
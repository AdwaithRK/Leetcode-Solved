class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<int> copy_num = nums;

        int index = -1;

        for(int i = copy_num.size() - 2; i >= 0; i--)
        {
            if(copy_num[i] < copy_num[i+1])
            {
                index = i;    
                break;
            }
        }

        if(index == -1)
        {
            reverse(copy_num.begin(), copy_num.end());
            nums = copy_num;
            return;
        }

        
        for(int i = copy_num.size() - 1; i > index; i--)
        {    
            if(copy_num[index] < copy_num[i])
            {
                swap(copy_num[index], copy_num[i]);
                break;
            }
        }

        reverse(copy_num.begin() + index + 1, copy_num.end());

        nums = copy_num;
        return;
    }
};
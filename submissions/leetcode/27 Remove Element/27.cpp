class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int r = 0, w = 0;
        while(r < size)
        {
            if(nums[r] == val)
            {
                r++;
            }
            else
            {
                nums[w++] = nums[r++];
            }
        }

        return w;
    }
};
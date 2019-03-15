class Solution 
{
public:
    int findMin(vector<int>& nums) 
    {
        if (nums.size() == 0) return 0;
        int i = 0, j = nums.size() - 1, res = nums[0];
        while (i < j)
        {
            while (nums[i] > nums[j]) i++;
            return nums[i];
        }
        return res;
    }
};
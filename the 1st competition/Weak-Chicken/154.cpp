class Solution 
{
public:
    int findMin(vector<int>& nums) 
    {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        int res = (nums[0] > nums[1]) ? nums[1] : nums[0];
        for(int i = 0; i < nums.size() - 2; i++)
        {
            while (nums[i] <= nums[i + 1] && i < nums.size() - 2) i++;
            return (nums[i] > nums[i + 1]) ? nums[i + 1] : nums[0];
        }
        return res;
    }
};
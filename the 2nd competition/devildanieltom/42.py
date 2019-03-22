class Solution(object):
    def trap(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        if len(height)==0:
            return 0
        ans = 0 
        size = len(height)
        left_max, right_max=[0]*size,[0]*size
        left_max[0]=height[0]
        for i in range(size):
            left_max[i]=max(height[i],left_max[i-1])
        right_max[size-1]=height[size-1]
        for i in range(size-2,-1,-1):
            right_max[i]=max(height[i],right_max[i+1])
        for i in range(size):
            ans+=min(left_max[i],right_max[i])-height[i]
        return ans

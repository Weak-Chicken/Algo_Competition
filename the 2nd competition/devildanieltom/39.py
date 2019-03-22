class Solution(object):
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        def dfs(nums,target, index,path, res):
            if target < 0:
                return 
            if target == 0:
                res.append(path)
                return 
            for i in range(index, len(nums)):
                dfs(nums,target-nums[i], i, path+[nums[i]], res)
        res=[]
        candidates.sort()
        dfs(candidates,target, 0, [], res)
        return res

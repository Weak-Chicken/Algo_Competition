class Solution(object):
    def sumEvenAfterQueries(self, A, queries):
        """
        :type A: List[int]
        :type queries: List[List[int]]
        :rtype: List[int]
        """
        res=[]
        tmp=sum(i for i in A if i%2==0)
        for val, index in queries:
            if A[index]%2==0:
                tmp-=A[index]
            A[index]+=val
            if A[index]%2 ==0:
                tmp+=A[index]
            res.append(tmp)
        return res

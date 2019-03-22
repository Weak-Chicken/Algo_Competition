class Solution 
{
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) 
    {
        vector<int>res;
        vector<int>addable = A;
        if (A.size() == 0 || queries.size() == 0) return res;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] % 2 != 0) addable[i] = 0;
        }
        for (int i = 0; i < queries.size(); i++)
        {
            A[queries[i][1]] += queries[i][0];
            if (A[queries[i][1]] % 2 == 0) addable[queries[i][1]] = A[queries[i][1]];
            else addable[queries[i][1]] = 0;
            res.push_back(accumulate(addable.begin(), addable.end(), 0));
        }
        return res;
    }
};
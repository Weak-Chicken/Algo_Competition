class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> nullvector;
        if (matrix.size() == 0) return nullvector;
        int m = matrix.size(), n = matrix[0].size(), matrix_size = m * n, counter = 0, k = 0, u = 0, b = m - 1, l = 0, r = n - 1;
        vector<int> res(m * n, 0);
        while (k < m * n)
        {
            for (int j = l; j <= r; j++) res[k++] = matrix[u][j];
            if (++u > b || k >= m * n) break;
            for (int i = u; i <= b; i++) res[k++] = matrix[i][r];
            if (--r < l || k >= m * n) break;
            for (int j = r; j >= l; j--) res[k++] = matrix[b][j];
            if (--b < u || k >= m * n) break;
            for (int i = b; i >= u; i--) res[k++] = matrix[i][l];
            if (++l > r || k >= m * n) break;
        }
        return res;
    }
};
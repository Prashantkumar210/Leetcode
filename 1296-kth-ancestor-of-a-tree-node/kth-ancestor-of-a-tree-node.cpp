class TreeAncestor {
public:
    int rows = 16;
    vector<vector<int>> mat;
    TreeAncestor(int n, vector<int>& parent) {
        mat.resize(16, vector<int>(n));
        mat[0]=parent;
        for (int i = 0; i < n; i++) {
            mat[0][i] = parent[i];
        }
        for (int i = 1; i < 16; i++) {
            for (int j = 0; j < n; j++) {
               mat[i][j] = (mat[i - 1][j] == -1) ? -1 : mat[i - 1][mat[i - 1][j]];
            }
        }
    }

    int getKthAncestor(int node, int k) {
        int ans = node;
        for (int i = 0; i < rows; i++) {
            int num = 1 << i;
            if ((num & k) != 0)
             {
                ans = mat[i][ans];
                if (ans == -1)
                    return -1;
            }
        }
        return ans;
    }
};

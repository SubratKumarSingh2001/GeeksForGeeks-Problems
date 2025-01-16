void transpose(vector<vector<int>>& mat, int n) {
        int temp;
        for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) {
                temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
}

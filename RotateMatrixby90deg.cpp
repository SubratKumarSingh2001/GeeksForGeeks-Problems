class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // code here
        int m = mat.size();
        //first transpose the matrix
        for(int i=0; i<m; i++) {
            for(int j=i; j<m; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        //now reverse each column to get the required matrix
        for(int i=0; i<m; i++) {
            for(int j=0; j<m/2; j++) {
                int temp = mat[j][i];
                mat[j][i] = mat[m-j-1][i];
                mat[m-j-1][i] = temp;
            }
        }
    }
};

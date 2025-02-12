class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int> ans;
        for(int i=1; i<=n; i++) {
            int c=1;
            for(int j=1; j<=i; j++) {
                ans.push_back(c);
                c=c*(i-j)/j;
            }
        }
        return ans;
    }
};

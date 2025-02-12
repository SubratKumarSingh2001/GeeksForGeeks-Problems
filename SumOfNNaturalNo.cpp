class Solution {
  public:
    int seriesSum(int n) {
        // code here
        int sum=0;
        for(int i=1; i<=n; i++) {
            sum = sum + i;
        }
        
        return sum;
    }
};

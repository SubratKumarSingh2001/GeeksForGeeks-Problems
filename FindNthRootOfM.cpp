class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        int start=0, end=m;
        int mid = start + (end-start)/2;
        while(start <= end) {
            if(pow(mid, n) == m) {
                return mid;
            }
            else if(pow(mid, n) > m) {
                end = mid-1;
            }
            else {
                start = mid+1;
            }
            mid = start + (end-start)/2;
            
        }
        return -1;
    }
};

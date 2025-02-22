class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        //TC: O(logn), SC: O(1)
        int start = 0, end = n;
        int mid = start + (end-start)/2;
        int ans = -1;
        while(start <= end) {
            if(mid*mid == n) {
                return mid;
            }
            else if(mid*mid > n) {
                end = mid-1;
            }
            else {
                ans = mid;
                start = mid + 1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    }
};

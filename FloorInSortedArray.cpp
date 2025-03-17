class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        int start=0, end=arr.size()-1;
        int mid = start + (end-start)/2;
        int ans=-1;
        while(start <= end) {
            if(arr[mid] == x) {
                ans = mid;
                start = mid+1;
            }
            else if(arr[mid] > x) {
                end = mid-1;
            }
            else {
                ans = mid;
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    }
};

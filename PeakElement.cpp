class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
        //Optimal Approach, Binary Search, TC: O(logn) SC: o(1)
        int start = 0, end = arr.size()-1;
        int mid = start + (end-start)/2;
        while(start <= end) {
            if(start == end) {
                return start;
            }
            else if(arr[mid] < arr[mid+1]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
            mid = start + (end-start)/2;
        } 
        return -1;
    }
};

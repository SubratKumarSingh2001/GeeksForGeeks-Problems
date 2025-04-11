class Solution {
  public:
    bool search(vector<int>& arr, int i, int target) {
        int start=0, end=arr.size()-1;
        int mid = start + (end-start)/2;
        while(start <= end) {
            if(i != mid && arr[mid] == target) {
                return true;
            }
            else if(arr[mid] > target) {
                end = mid-1;
            }
            else {
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return false;
    }
    bool findPair(vector<int> &arr, int x) {
        // code here
        //TC: O(nlogn), SC: O(n)
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++) {
            int diff = abs(arr[i] + x);
            if(search(arr, i, diff)) {
                return true;
            }
        }
        return false;
    }
};

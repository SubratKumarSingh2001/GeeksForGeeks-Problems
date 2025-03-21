class Solution {
  public:
    int pivot(vector<int> &arr, int start, int end) {
        int mid = start + (end-start)/2;
        if(arr[start] < arr[end]) {
            return end;
        }
        while(start <= end) {
            if(start == end) {
                return start;
            }
            if(mid+1<=end && arr[mid] > arr[mid+1]) {
                return mid;
            }
            else if(mid-1>=start && arr[mid-1] > arr[mid]) {
                return mid-1;
            }
            else if(arr[start] > arr[mid]) {
                end = mid-1;
            }
            else if(arr[start] < arr[mid]) {
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    }
    int findKRotation(vector<int> &arr) {
        // Code Here
        /*we will find the pivot index, which will help us to tell 
        how man times the array is rotated*/
        int start=0, end=arr.size()-1;
        int pivotIndex = pivot(arr, start, end);
        if(pivotIndex == arr.size()-1) {
            return 0;
        }
        int rotation = pivotIndex+1;
        
        return rotation;
    }
};

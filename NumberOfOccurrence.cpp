class Solution {
  public:
    int firstOccur(vector<int> &arr, int target) {
        //TC: O(logn), SC: O(1)
        int s=0, e=arr.size()-1;
        int m = s + (e-s)/2;
        int first = -1;
        while(s <= e) {
            if(arr[m] == target) {
                first = m;
                e = m-1;
            }
            else if(arr[m] > target) {
                e = m-1;
            }
            else {
                s = m+1;
            }
            m = s + (e-s)/2;
        }
        return first;
    }
    
    int lastOccur(vector<int> &arr, int target) {
        int s=0, e=arr.size()-1;
        int m = s + (e-s)/2;
        int last = -1;
        while(s <= e) {
            if(arr[m] == target) {
                last = m;
                s = m+1;
            }
            else if(arr[m] > target) {
                e = m-1;
            }
            else {
                s = m+1;
            }
            m = s + (e-s)/2;
        }
        return last;
    }
    
    int countFreq(vector<int>& arr, int target) {
        // code here
        int first = firstOccur(arr, target);
        int last = lastOccur(arr, target);
        
        if(first == -1 && last == -1) return 0;
        int totalOccur = last - first + 1;
        
        return totalOccur;
    }
};

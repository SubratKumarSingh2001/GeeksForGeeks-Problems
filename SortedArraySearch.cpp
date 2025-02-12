bool searchInSorted(vector<int>& arr, int k) {

        // Your code here
        //Binary Search as array is sorted TC:O(logn) SC:O(1)
        int s=0, e= arr.size()-1;
        int m = s + (e-s)/2;
        while(s<=e) {
            if(arr[m] == k) {
                return true;
            }
            else if(arr[m] > k) {
                e = m-1;
            }
            else if(arr[m] < k) {
                s = m+1;
            }
            m = s + (e-s)/2;
        }
        return false;
    }

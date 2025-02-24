int findOnce(vector<int>& arr) {
        // code here.
        //Optimal Approach: Binary Search, TC: O(logn), SC: O(1);
        int start = 0, end = arr.size()-1;
        int mid  = start + (end - start)/2;
        while(start <= end) {
            if(start == end) {
                return arr[start];
            }
            if(mid % 2 == 0) {
                if(arr[mid] == arr[mid-1]) {
                    end = mid - 2;
                }
                else {
                    /*
                    as required ans is present at even index so we dontwant to loose mid index
                    */
                    start = mid;
                }
            }
            else {
                if(arr[mid] == arr[mid+1]) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }
            mid = start + (end - start)/2;
        }
        return -1;
    }

//TC: O(logn), SC: O(1)
    int firstOccurence(vector<int> &arr, int target) {
        int s=0, e=arr.size()-1;
        int m = s + (e-s)/2;
        int ans1 = -1;
        while(s<=e) {
            if(arr[m] == target) {
                ans1 = m;
                e = m -1;
            }
            else if(arr[m] > target) {
                e = m-1;
            }
            else {
                s = m+1;
            }
            m = s + (e-s)/2;
        }
        return ans1;
    }
    
    int lastOccurence(vector<int> &arr, int target) {
        int s=0, e=arr.size()-1;
        int m = s + (e-s)/2;
        int ans2 = -1;
        while(s<=e) {
            if(arr[m] == target) {
                ans2 = m;
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
        return ans2;
    }
    
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int ans1 = firstOccurence(arr, x);
        int ans2 = lastOccurence(arr, x);
        
        return {ans1, ans2};
    }

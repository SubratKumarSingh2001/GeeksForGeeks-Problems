void reverseArray(vector<int> &arr) {
        // code here
        //Method:1 TC: O(n) SC:O(1)
        for(int i=0; i<arr.size()/2; i++) {
            int temp = arr[i];
            arr[i] = arr[arr.size()-i-1];
            arr[arr.size()-i-1] = temp;
        }
        
        //Method;2 TC: O(n) SC:O(1)
        int start=0, end = arr.size()-1; //two pointer approach
        while(start <= end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        
        //Method:3 XOR Operator TC: O(n) SC:O(1)
        for(int i=0; i<arr.size()/2; i++) {
            arr[i] = arr[i]^arr[arr.size()-i-1];
            arr[arr.size()-i-1] = arr[i]^arr[arr.size()-i-1];
            arr[i] = arr[i]^arr[arr.size()-i-1];
        }
    }

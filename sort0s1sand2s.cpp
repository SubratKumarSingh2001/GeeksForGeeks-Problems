  public:
    void sort012(vector<int>& arr) {
        // code here
        // MethOd:1 
        // sort(arr.begin(), arr.end()); can be sort using inbuilt sort function
        // TC: O(nlogn) SC: O(n)
        
        //Method:2
        //TC: O(n) SC: O(n)
        int zeros=0, ones=0, twos=0;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] == 0) zeros++;
            else if(arr[i] == 1) ones++;
            else if(arr[i] == 2) twos++;
        }
        
        int i=0;
        while(zeros) {
            arr[i] = 0;
            i++;
            zeros--;
        }
        while(ones) {
            arr[i] = 1;
            i++;
            ones--;
        }
        while(twos) {
            arr[i] = 2;
            i++;
            twos--;
        }
         
        //Method:3 optimal solution 
        //TC: O(n) SC: O(1)
        int start=0, mid=0, end = arr.size()-1;
        while(mid <= end) {
            if(arr[mid] == 0) {
                swap(arr[start], arr[mid]);
                start++, mid++;
            }
            else if(arr[mid] == 1) {
                mid++;
            }
            else {
                swap(arr[mid], arr[end]);
                end--;
            }
        }
       
    }
};

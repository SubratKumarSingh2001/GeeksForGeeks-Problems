void sort012(vector<int>& arr) {
        // code here
        // sort(arr.begin(), arr.end()); can be sort using inbuilt sort function
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
       
  }

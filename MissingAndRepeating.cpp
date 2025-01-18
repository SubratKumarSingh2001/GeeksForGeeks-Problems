vector<int> findTwoElement(vector<int>& arr) {
        // code here
        //duplicate element finding method 
        int ans=-1, duplicate=-1;
        for(int i=0; i<arr.size(); i++) {
            int index = abs(arr[i])-1;
            if(arr[index] < 0) {
                duplicate = index+1;
            }
            else {
                arr[index] *= ans;
            }
        }
        //missing
        int missing=-1;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] > 0) {
                missing = i+1;
                break;
            }
        }
        
        return{duplicate, missing};
        
    }

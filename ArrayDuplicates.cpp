vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> temp;
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size()-1; i++) {
            if(arr[i] == arr[i+1]) {
                temp.push_back(arr[i]);
            }
        }
        return temp;
}

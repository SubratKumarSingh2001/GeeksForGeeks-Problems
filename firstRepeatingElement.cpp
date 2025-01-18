class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr) {
        // code here
        int max = INT_MIN;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        
        vector<int> hash(max+1, 0);
        for(int i=0; i<arr.size(); i++) {
            hash[arr[i]]++;
        }
        
        for(int i=0; i<arr.size(); i++) {
            if(hash[arr[i]] > 1) {
                return i+1;
            }
        }
        return -1;
    }
};

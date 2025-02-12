class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest = INT_MIN;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] > largest) {
                largest = arr[i];
            }
        }
        
        return largest;
    }
};

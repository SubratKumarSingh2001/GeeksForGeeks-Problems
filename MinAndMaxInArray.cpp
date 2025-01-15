class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        int max = INT_MIN, min= INT_MAX;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        return {min,max};
    }
};

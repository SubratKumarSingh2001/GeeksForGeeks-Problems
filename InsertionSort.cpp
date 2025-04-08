class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        for(int i=0; i<arr.size(); i++) {
            int val = arr[i];
            int j = i-1;
            while(j >= 0) {
                if(arr[j] > val) {
                    arr[j+1] = arr[j];
                    j--;
                }
                else {
                    break;
                }
            }
            arr[j+1] = val;
        }
    }
};

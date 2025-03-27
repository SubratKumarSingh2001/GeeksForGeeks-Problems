class Solution {
  public:
    int sum(vector<int> &arr, int divisor) {
        int sum=0;
        for(int i=0; i<arr.size(); i++) {
            sum += ceil((double)arr[i]/divisor);
        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& arr, int k) {

        // Write your code here.
        //TC: O(log(maxEle)*n), SC: O(1)
        int maxEle = *max_element(arr.begin(), arr.end());
        int start=1, end=maxEle;
        int divisor = start + (end-start)/2;
        int ans = -1;
        while(start <= end) {
            if(sum(arr, divisor) <= k) {
                ans = divisor;
                end = divisor-1;
            }
            else {
                start = divisor+1;
            }
            divisor = start + (end-start)/2;
        }
        return ans;
    }
};

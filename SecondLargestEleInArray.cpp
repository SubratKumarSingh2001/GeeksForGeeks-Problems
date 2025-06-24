class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        //Brute Force: Sort the array and return second larget element
        TC: O(nlogn) + O(n), SC: O(1)
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int largest = arr[n-1];
        int secLargest = -1;
        for(int i=n-2; i>=0; i--) {
            if(arr[i] != largest) {
                secLargest = arr[i];
                break;
            }
        }
        return secondLargest;
        
        //Better Solution
        //TC: O(n+n = 2n), SC: O(1)
        /*First we will find the largest and again we will traverse the loop
        and check for each ele if it is not largest if not, then we will
        checck can that ele be the potential 2nd largest ele if yes update
        the 2nd largest
        */
        int lar = INT_MIN;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] > lar) {
                lar = arr[i];
            }
        }
        //now
        int secLar = -1;//in case no 2nd Largest there we have to return -1
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] != lar && arr[i] > secLar) {
                secLar = arr[i];
            }
        }
        return secLar;
        
        //Optimal Solution
        //TC: O(n), SC: O(1)
        int large = arr[0], secLar = -1;
        for(int i=1; i<arr.size(); i++) {
            if(arr[i] > large) {
                secLar = large;
                large = arr[i];
            }
            //this done so as, when secLar is not getting updated from above if case 
            else if(arr[i] > secLar && arr[i] != large) {
                secLar = arr[i];
            }
        }
        return secLar;
    }
};

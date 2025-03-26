class Solution {
  public:
     //TC: O(m), SC: O(1)
    int count1(vector<int> &nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 1) {
                count++;
            }
        }
        return count;
    }
    
    //TC: O(logm), SC: O(1)
    int count2(vector<int> &nums, int cols) {
        int s=0, e=nums.size()-1;
        int m = s +(e-s)/2;
        int ans = -1;
        while(s <= e) {
            if(nums[m] == 1) {
                ans = m;
                e = m-1;
            }
            else {
                s = m+1;
            }
            m = s + (e-s)/2;
        }
        return (ans == -1) ? 0 : cols-ans;
    }
    
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        //Brute Force Approach
        //TC: O(n*m), SCl O(1) if we use func, count1()
        //Optimal Approach
        //TC: O(n*logm), SC: O(1) if we use func, count2();
        int prevCount=0, row=-1, cols = arr[0].size();
        for(int i=0; i<arr.size(); i++) {
            int newCount = count2(arr[i], cols);
            if(newCount > prevCount) {
                prevCount = newCount;
                row = i;
            }
        }
        return row;
    }
};

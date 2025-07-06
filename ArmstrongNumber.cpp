class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        //Optimal Solution
        /*As given that the length of n will be always 3 so the loop will
        always run three times to extract all the three digits, while 
        / and % take constant time and pow() also take constant time
        . Therefore the overall TC: O(1) and SC: O(1)*/
        int sum = 0;
        int num = n;
        while(n) {
            int rem = n % 10;
            sum += pow(rem, 3);
            n /= 10;
        }
        if(sum == num) return true;
        return false;
        
    }
};

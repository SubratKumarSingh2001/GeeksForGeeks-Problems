class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        //TC: O(n), SC: O(1)
        int m = n;
        //if in beginning the value of m is leass than equal to INt_MIN return 0
        if(m <= INT_MIN) {
            return 0;
        }
        if(n < 0) {
            m = -m;
        }  
        int ans = 0;
        while(m) {
            if(ans > INT_MAX/10) {
                return 0;
            }
            int rem = m % 10;
            ans = ans*10 + rem;
            m /= 10;
        }
        
        if(n < 0) return -ans;
        else return ans;
    }
};

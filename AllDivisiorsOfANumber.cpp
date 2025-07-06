class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        //Brute Force: TC: O(n) SC: O(1)
        for(int i=1; i<=n; i++) {
            if(n%i == 0) {
                cout << i <<" ";
            }
        }
        
        //Optimal Solution
        /*We can run loop till the square root of n as after that the 
        factor repeats as all the factors can be surely print running loop
        till sqrt(n) because n = i*j we can find the i with the loop and j
        with n/i simultaneously
        */
        //TC: O(sqrt(n)), SC: O(sqrt(n))
        vector<int> ans;
        for(int i=1; i*i<=n; i++) {
            if(n % i == 0) {
                ans.push_back(i);
                if(n/i != i) ans.push_back(n/i);
            }
        }
        sort(ans.begin(), ans.end());
        for(auto i: ans) {
            cout<< i <<" ";
        }
    }
}; 

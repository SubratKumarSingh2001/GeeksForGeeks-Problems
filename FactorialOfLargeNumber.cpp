class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int> ans{1};
        int carry = 0;
        for(int i=2; i<=n; i++) {
            for(int j=0; j<ans.size(); j++) {
                int mul = i*ans[j] + carry;
                int rem = mul%10;
                ans[j] = rem;
                carry = mul/10;
            }
            //when above loop terminates check any carry is left or not
            while(carry) {
                ans.push_back(carry%10);
                carry /= 10;
            }
        }
        
        //ans is present in reverse order we have to reverse it 
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

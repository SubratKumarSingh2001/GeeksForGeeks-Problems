class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        //Brute Force, TC: O(min(a,b), SC: O(1)
        int gcd = -1;
        for(int i=1; i<=min(a,b); i++) {
            if((a % i == 0) && (b % i == 0)) {
                /*We can use gcd = max(gcd, i) but gcd value will change till it satisfies
                the if-condition so the last stored vaue in gcd varibale will be the 
                largest +ve number that divides the small and large.
                Hence we wrote gcd = i 
                */
                gcd = i; 
            }
        } 
        return gcd; 
        
        //Better Solution: Modification of above Brute Force
        //It will lead to better Time Complexity
        //TC: O(min(a,b)), SC: O(1)
        for(int = min(a,b); i>=1; i--) {
            if((a % i == 0) && (b % i == 0)) {
                gcd = i;
                break;
            }
        }
        return gcd;
        
        //Optimal Solution: Euclidean Algorithm
        /*The Euclidean Alog states that 
        gcd(a,b) = gcd(a-b,b) if a>b, do this until either of a or b 
        become 0 then the non zero number will be the gcd of a and b
        */
        //TC: O(logx min(a,b)), SC: O(1)
        while(a>0 && b>0) {
            if(a > b) {
                a = a % b;
            }
            else {
                b = b % a;
            }
        }
        //now either of a or b become 0
        if(a == 0) return b;
        return a;
        
    }
};

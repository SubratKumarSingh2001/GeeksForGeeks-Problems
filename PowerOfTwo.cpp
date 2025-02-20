bool isPowerofTwo(int n) {
        // code here
        //Approach:1 TC: SC: 
        int i=0;
        while(true) {
            if(pow(2,i) == n) {
                return true;
            }
            else if(pow(2,i) > n) {
                break;
            }
            else {
                i++;
            }
        }
        return false;
        
        //Approach:2 TC: SC: 
        while(n) {
            if(n == 1)  return true;
            if(n % 2 != 0) break;
            n /= 2;
        }
        return false;
    }

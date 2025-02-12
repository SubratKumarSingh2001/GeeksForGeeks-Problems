int reverseDigits(int n) {
        // Code here
        // TC:O(n^2) SC:O(n)
        int num=0; 
        while(n) {
            int rem = n%10;
            num = num*10 + rem;
            n = n/10;
        }
        return num;
    }

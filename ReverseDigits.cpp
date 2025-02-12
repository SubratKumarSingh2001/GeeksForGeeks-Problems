int reverseDigits(int n) {
        // Code here
        int num=0; 
        while(n) {
            int rem = n%10;
            if(rem != 0) {
                num = num*10 + rem;
            }
            n = n/10;
        }
        return num;
    }

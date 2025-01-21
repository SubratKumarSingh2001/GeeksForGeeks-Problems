vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        vector<int> ans;
        int m = mat.size();
        int n = mat[0].size();
        int totalEle = m*n; //total no.of elements in 2D Matrix
        
        //initial row and column print
        int startRow = 0;
        int endCol = n-1;
        int endRow = m-1;
        int startCol = 0;
        
        /*
        now we have to create a loop and run it until all elements get 
        printed. For every element is being printed we have to increase 
        the value of count and once it crosses the value of totalEle present 
        in matrix we have to break the loop
        */
        int count = 0; //initially no element is printed
        while(count < totalEle) {
            //starting row print 
            for(int i=startCol; i<=endCol && count<totalEle; i++) {
                ans.push_back(mat[startRow][i]);
                count++;
            }
            startRow++;
            
            //ending column print
            for(int i=startRow; i<=endRow && count<totalEle; i++){
                ans.push_back(mat[i][endCol]);
                count++;
            }
            endCol--;
            
            //ending row print 
            for(int i=endCol; i>=startCol && count<totalEle; i--) {
                ans.push_back(mat[endRow][i]);
                count++;
            }
            endRow--;
            
            //starting column print
            for(int i=endRow; i>= startRow && count<totalEle; i--) {
                ans.push_back(mat[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }

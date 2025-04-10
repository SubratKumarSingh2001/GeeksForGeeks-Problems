class Solution {
  public:
    //TC: O(nlogn), SC: O(logn)
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low >= high)  return;
        /*This will help to call the recusrive quick sort left and right
        part of the array and when single element left stop*/
        int pivotIndex = partition(arr, low, high);
        
        //left part of array quick sort recursive call
        quickSort(arr, low, pivotIndex-1);
        
        //right part of array quick sort recursive call
        quickSort(arr, pivotIndex+1, high);
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        // code here
        //it is told to take the last element as pivot
        int pivotIndex = high;
        int pivotElement = arr[high];
        /*As the low and high will change according to which part of the
        array we are applying the quick sort 
        */
        int cnt=0;
        for(int i=low; i<high; i++) {
            if(arr[i] <= pivotElement) { //<= for duplicate cases
                cnt++;
            }
        }
        
        /*now we have to place the pivotElement at its correct positon in
        sorted array*/
        swap(arr[high], arr[low+cnt]);
        //now updated pivotIndex is 
        pivotIndex = low+cnt;
        
        /*now to check all the elements left to updated pivotIndex element
        must be smaller and right to updated pivotIndex element must be
        greater
        */
        int i=low, j=high;
        while(i<pivotIndex && j>pivotIndex) {
            while(arr[i] <= arr[pivotIndex]) { //<= duplicate cases
                i++;
            }
            while(arr[j] > arr[pivotIndex]) {
                j--;
            }
            
            //if element left is greater and right is smaller just swap
            if(i<pivotIndex && j>pivotIndex) {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
        
        //at last after every condition return the pivotIndex
        return pivotIndex;
    }
};

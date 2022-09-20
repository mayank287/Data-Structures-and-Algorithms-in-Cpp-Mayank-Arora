// Move All zeros To End Not Optimized  time Complexity o(n2)
// Need to Check Solution Not Run Properly on Gfg portal On the Test Case
//20 (Input Size)
//15 12 0 0 0 2 2 19 6 17 16 20 0 2 16 0 10 0 14 15 

    
    void pushZerosToEnd(int arr[], int n) {
	   for(int i=0; i<n ;i++){
	       if(arr[i] == 0){
	           for(int j = i+1; j<n;j++ ){
	               if(arr[j] != 0 ){
	                   swap(arr[i],arr[j]);
	               }
	           }
	       }
	   }
	}
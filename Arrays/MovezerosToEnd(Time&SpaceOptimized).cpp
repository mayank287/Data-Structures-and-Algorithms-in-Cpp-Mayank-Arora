// Move All zeros To End Time o(n) and o(1) space




void pushZerosToEnd(int arr[], int n) {
	    int count =0;
	    for(int i = 0; i<n;  i++){
	        if(arr[i] !=0){
	            swap(arr[i],arr[count]);
	            count++;
	        }
	    }
	}
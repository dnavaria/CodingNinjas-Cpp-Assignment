/*
Quick Sort Code

Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.
Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)
Output format :
Array elements in increasing order (separated by space)
Constraints :
1 <= n <= 1000
Sample Input:
6 
2 6 8 5 4 3
Sample Output:
2 3 4 5 6 8

*/




int partition(int input[], int start, int end){
	int countSmaller=0;
	int pivot = input[start];
	for(int i = start+1; i <=end ; i++){ 
		if(input[i]<=pivot){
			countSmaller++;
		}
	}
    
    int pivotIndex = start+countSmaller;
    input[start] = input[pivotIndex];
	input[pivotIndex] = pivot;	

	int i = start, j=end;
    
	while(i<pivotIndex && j>pivotIndex){

		
		if(input[i]<=pivot){
			i++;
		}
		else if(input[j]>pivot){
			j--;
		}
        else{
         	int temp = input[i];
			input[i] = input[j];
			input[j] = temp;
			i++;
			j--;
        }

	}
return pivotIndex;
}

void qs(int input[], int start, int end){
	if(start>=end){
		return;
	}
	int pivot = partition(input,start,end);
	qs(input,start,pivot-1);
	qs(input,pivot+1,end);
}

void quickSort(int input[], int size) {
	qs(input,0,size-1);
}

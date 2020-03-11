/*
Merge Sort Code

Sort an array A using Merge Sort.
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
void mergee(int a[],int s,int m,int e){
	int n1 = m-s+1;
	int n2 = e-m;
	int l[n1];int r[n2];
	int i=0,j=0,k=s;
	for(int x = 0; x < n1; x++){ l[x] = a[s+x]; }
	for(int y = 0; y < n2; y++){ r[y] = a[m+y+1]; }
	while(i<n1&&j<n2){
		if(l[i] <= r[j]){ a[k] = l[i]; i++;  }
		else{ a[k] = r[j]; j++; }
		k++;
	}
	while(i < n1){ a[k++] = l[i++];  }
	while(j < n2){ a[k++] = r[j++];  }
		
				
}
void mergeS(int a[],int s,int e){
	if(s < e){
		int mid = (s+e)/2;
		mergeS(a,s,mid);
		mergeS(a,mid+1,e);
		mergee(a,s,mid,e);


	}
}
void mergeSort(int a[],int s){
	
	mergeS(a,0,s-1);
	
}
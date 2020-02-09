/*Code Merge Two Sorted Arrays

Given two sorted arrays of Size M and N respectively, 
merge them into a third array such that the third array is also sorted.
Input Format :
 Line 1 : Size of first array i.e. M
 Line 2 : M elements of first array separated by space
 Line 3 : Size of second array i.e. N
 Line 2 : N elements of second array separated by space
Output Format :
M + N integers i.e. elements of third sorted array separated by spaces.
Constraints :
1 <= M, N <= 10^6*/


void merge(int a[], int size1, int b[], int size2, int c[]){
	int n = size2+size1;

	int x=0,y=0;

	a[size1] = INT_MAX;
	b[size2] = INT_MAX;


	for (int i = 0; i < n; ++i){
	
		if(a[x] < b[y]){
			c[i] = a[x]; ++x;
		}

		else if(a[x] > b[y]){
			c[i] = b[y]; ++y;
		}
		else if(a[x] == b[y] && a[x] != INT_MAX){
			c[i]=a[x]; ++x;
		}
		else if(a[x] == INT_MAX){
			for (int z = y; z < size2 && i<n; ++z){
				c[i] = b[z];
				i++;
			}
			return;
		}
		else if (b[y] == INT_MAX){
			for(int j = x; j <size1 && i<n ; j++){
				c[i] = a[j];
				i++;
			}
			return;
		}
	}
}

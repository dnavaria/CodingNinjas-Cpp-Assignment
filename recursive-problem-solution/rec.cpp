#include <iostream>
using namespace std;
int ssk(int input[], int n, int output[][50], int k,int o1[][50],int o2[][50]){
	if(n==0){
		if(k==0){
			output[0][0] = 0;
			return 1;
		}else{
			return 0;
		}
	} 
	int s1 = ssk(input+1,n-1,output,k,o1,o2);


	int s2 = ssk(input+1,n-1,output,k-input[0],o1,o2);


	return s1+s2;
}

int subsetSumToK(int input[], int n, int output[][50], int k) {
	int o1[1000][50];
	int o2[1000][50];
	return ssk(input,n,output,k,o1,o2);
}

int main() {
  int input[20],length, output[10000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}

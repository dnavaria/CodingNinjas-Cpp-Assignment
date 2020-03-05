#include <bits/stdc++.h>
#include<sys/time.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*a = temp;
}

long getTimeinMicroSeconds(){
	struct timeval start;
	gettimeofday(&start,NULL);
	return start.tv_sec * 1000000 + start.tv_usec;
}

void printArray(int *a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	cout << endl;
}
int secondLargest(int *a,int n){
	if(n<=1){return INT_MIN;}
	int l=INT_MIN,sl=INT_MIN;
	for(int i=0;i<n;i++){ if(a[i]>l ){ sl =l; l = a[i];} else if(l == sl){return INT_MIN;}}
	return sl;
}


void Rotate(int *a,int step,int n){
//	for(int i=0;i<n;i++){ int x = (a[i] + step) % n;  if(x == 0){a[i] = n;}else{ a[i] = x;}}
		int *ax = new int[n];
		int z = 0;
		for(int i=step;i<n;i++){ ax[z] = a[i]; z++;}
		for(int i=0;i<=step;i++){ax[z]= a[i];z++;}
		for(int i=0;i<n;i++){a[i] = ax[i];}
}
int FindSortedArrayRotation(int a[], int n) {
		int j=1;
		for(int i=0;i<n;i++){ if(a[i]<a[j]){j++;}else{return i;}}

return 0;
}

int length(char a[]){
	int i=0;
	while(a[i] != '\0'){ ++i; }
	return i;
}

void reverse(char a[],int start,int end){
	int i = start,j=end-1;
	char x;
	while(i<j){
		x=a[i];
		a[i]=a[j];
		a[j]=x;
		i++;
		j--;
	}
}

void reverseStringWordWise(char a[]) {
  int st=0,end=0;
  int len = length(a);
  reverse(a,0,len);
  int i=0;
  for (;i<len; i++)
  {
 	if (a[i] == ' '){
 	 	reverse(a,st,i);
 	 	st = i+1;
 	 } 	
 	 
  }
  if(a[i]=='\0'){reverse(a,st,i);}
}

void subs(char a[],int x,int n){
	for(int i = x; i < n ; i++){ 
		for(int j = x; j <=i ; j++){ 
			cout<<a[j];
		}
		cout<<endl;
	}
	
}

void printSubstring(char a[]){
	int n=strlen(a);
	int c = 0;
	for(int i = 0; a[i]!='\0' ; i++){ 
		subs(a,i,n);	
	}
}

int factorial(int n){
	if (n==0)
	{
		return 1;
	}
	return n*factorial(n-1);
}

int main(){
	string x[] = {"abc","def"};
	cout<<x[0][1];
}

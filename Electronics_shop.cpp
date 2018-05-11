#include<iostream>
using namespace std;
int main(){
	
	long int b,n,m;
	cin>>b>>n>>m;
	int A[n];
	int B[m];
	int C[n+m+1];
	for(int i = 0;i<n;i++)
	  cin>>A[i];
	  
	for(int j=0;j<m;j++)
	   cin>>B[j];
	int ms = -1;
	for(int i = 0; i<n; i++){
		
		for(int j = 0; j<m; j++){
			
			if(A[i]+B[j]>b)
			  break;
			if((A[i]+B[j])>ms)
			  ms = A[i]+B[j];  
			
		}
	}     
     cout<<ms;

         return 0;
}

#include<iostream>
using namespace std;
int main(){
	
	int n,m,pos;
	
	cin>>n;
	
	int A[n];
	
	for(int i = 0;i<n;i++)
	   cin>>A[i];
	
	cin>>m;
	
	int B[m];
	
	for(int i=0;i<m;i++)
	   cin>>B[i];
	
	for(int i = 0; i<m; i++){
		
		for(int j=n-1;j>=0;j--){
		
		  if(B[i]<=A[j]){
		  	pos = j;
		  	cout<<pos<<endl;
		  	break;
		  }
		
		  else if(B[i]>A[j] && B[i]<=A[j-1]){
		  	
		  	  pos = j-1;
		  	  cout<<pos<<endl;
		  	  break;
		  }else if(B[i]>A[0]){
		  
		     cout<<"1";
		     break;
			}
		  
	    }
		
	}      
	
	
	return 0;
}

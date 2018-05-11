#include<iostream>
using namespace std;
int main(){
	
	int n,p,sea=0,v=0;
	cin>>n;
	char s[n];
	cin>>s;
	for(int i=0;i<n;i++){
		
	   if(s[i]=='D'){
	   	  sea-=1;
	   }	
	   if(s[i]=='U'){
	   	
	   	  sea+=1;
	   	  if(sea==0)
	   	    v+=1;
	   	
	   }
	}
	cout<<v;   
	  
	return 0;
}

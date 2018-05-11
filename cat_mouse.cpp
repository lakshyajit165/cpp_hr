#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	int x,y,z,n;
	cin>>n;
	while(n--){
		
		cin>>x>>y>>z;
		if(abs(z-x)>abs(z-y))
		  cout<<"Cat B"<<endl;
		if(abs(z-x)<abs(z-y))
		  cout<<"Cat A"<<endl;
		if(abs(z-x)==abs(z-y))
		   cout<<"Mouse C"<<endl;    
		
		
	}
	
	return 0;
}

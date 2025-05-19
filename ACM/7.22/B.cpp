#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
long long sum1,sum2;
int main(){
	int t,n,i,step;
	cin>>t;
	while(t--){
		cin>>n;
		if(n%2!=0)
		continue;
		else{
		sum1=0,sum2=0,step=1;
		for(i=1;i<=n-1;i++){
		    step=step*2;
			sum1=sum1+step;
			}
			step=1;
		for(i=1;i<=(n/2)-1;i++){
			step=step*2;	
		    sum2=sum2+step;}
	
        cout<<pow(2,n)+2*sum2-sum1<<endl;}
	}
	return 0;
} 

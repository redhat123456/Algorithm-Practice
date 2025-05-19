#include<iostream>
using namespace std;
int main(){
	int t,n,i,m,sum=0;
	cin>>t;
	while(t--){
	cin>>n;
	sum=0;
	for(i=0;i<n;i++){
	cin>>m;
	sum+=m;
	}
	if(sum%2==0)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
	}
	return 0;
}

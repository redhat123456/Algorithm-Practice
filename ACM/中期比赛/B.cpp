#include<iostream>
using namespace std;
int main(){
	int l[101],x[101],t,i,sum1=0,sum2=0;
	cin>>t;
	for(i=0;i<t;i++)
	cin>>l[i];
	for(i=0;i<t;i++)
	cin>>x[i];
	for(int j=1;j<=10;j++){
	sum1=0;
	sum2=0;
			for(i=0;i<t;i++){
				if(l[i]){
				sum1+=j*l[i];
				sum2+=j*x[i];
				}
			    else
				sum2+=1*x[i];
	        }
         	if(sum1>sum2){
			cout<<j<<endl;
			return 0;
	}
	}
	return 0;
}


#include<math.h>
#include<string.h>
#include<iostream>
using namespace std; 
char x[2001],y[2001],z[2001];
int i,n;
int base(int k, char s[])
{
	int len=0,sum=0;
	int i,j,t,n;

	while (s[len]!='\0') len++;
	i=len-1;
	while (s[i]!='\0')
	{
		n=0;
		if (s[i]>='0'&&s[i]<='9')
			n=s[i]-'0';
		else if (s[i]>='A'&&s[i]<='F')
				n=10+s[i]-'A';
		t=1;
		for (j=0; j<len-i-1; j++) t=t*k;
		sum += n*t;
		i--;
	}
	return (sum);
}
void jinzhi(long long n,long long r){
	if(n<r){
		if(n<10) printf("%d",n);
		if(n>=10) printf("%c",55+n);
	} 
	else{
		jinzhi(n/r,r);
		if(n%r<10) printf("%d",n%r);
		if(n%r>=10) printf("%c",55+n%r);
	}
}

int main(){
    long long sum=0;
	cin>>n;
	cin>>x;
	cin>>y;
	sum=base(n,x)+base(n,y);
    jinzhi(sum,n);
	return 0;
}

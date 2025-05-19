#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
char x[201]={0},y[201]={0};
int main(){
	int i=201,n;
	scanf("%s",&x);
	scanf("%s",&y);
	while(i--){
		x[201-i-1]=x[i];
		y[201-i-1]=y[i];
	}
	n=max(strlen(x),strlen(y));
	for(i=0;i<n;i++){
		if(x[i]+y[i]-'0'-'0'<10||x[i]+y[i]-'0'-'0'>0)
		x[i]=x[i]+y[i]-'0'-'0';
		else if(x[i]+y[i]-'0'-'0'<20||x[i]+y[i]-'0'-'0'>=10){
			x[i]=x[i]+y[i]-'0'-'0'-10;
			x[i+1]++;
		} 
	}
	for(i=0;i<n;i++){
		if(x[i]==0) continue;
		printf("%d",x[i]);
	}
	return 0;
} 

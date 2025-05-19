#include<string.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	char s[100001];
	gets(s);
	n=strlen(s);
	int i=0;
	while(i<=n-1){
		cout<<s[i]; 
		i+=2;
	}
	cout<<s[n-1];
	return 0;
} 

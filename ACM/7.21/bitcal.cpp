#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
char str[1000007];
int main() {
	int result,n;
	scanf("%s",&str);
	n=strlen(str);
	result = str[0];
	for (int i=0;i<n/4;i++){
	   result = result ^ (str[i]-'0');
	   if (result==0){
	   	cout<<"NO";
	   	return 0;
	   }
		}
	cout<<"YES";
    return 0;
}


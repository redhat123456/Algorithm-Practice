#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
char x[2001],y[2001];
int a[2001],b[2001],n;
void jia(){
	int len;
	int l1 = strlen(x);      
	int l2 = strlen(y);   
	if (l1 > l2) 
		len = l1;     
	else 
		len = l2;
	for (int i = l1 - 1 ; i >= 0 ; i--)    
		a[l1 - i - 1] = x[i] - '0';        
	for (int i = l2 - 1 ; i >= 0 ; i--)    
		b[l2 - i - 1] = y[i] - '0';       
	                                
	for (int i = 0 ; i < len ; i++)
	{
		a[i] = a[i] + b[i];    
		a[i+1]+= a[i] / n;    
		a[i] = a[i] % n;      
	}
	if (a[len] != 0) len++;   

	while (a[len - 1] == 0 && len>1) len--;		
		
	for (int i = len - 1 ;i >= 0 ;i--)  
	if('0'<=a[i]+'0'&&a[i]+'0'<='9')
		printf("%c",a[i]+'0'); 
	else if(a[i]+'0'>=10)
	    printf("%c",a[i]+'0'); 
}
int main(){
	cin>>n;
	cin>>x;
	cin>>y;
	jia();
	return 0;
}

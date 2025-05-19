#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char str[1000007];
int main() {
	int result,n;
	scanf("%s",&str);
	n=strlen(str);
	result = str[0]-'0';
	for (int i=0;i<n;i++){
	   result = (result-'0') ^ (str[i]-'0');
	   if (result==0){
	   	cout<<"NO";
	   	return 0;
	   }
		}
	cout<<"YES";
    return 0;
}
#include<stdio.h>
#include<stdbool.h>
int main()
{
    char A[10];
    bool result[300]; 
    scanf("%s",A);
    for(int i = 0; i < 200; i++)
    {
    	result[i] = false;
	}
    for(int i = 0; A[i] != 0; i++)
    {
        if(result[A[i]] == true)
        {
        	printf("NO");
        	return 0;
		} 
		else
		{
			result[A[i]] = true;
		}
    }
    printf("YES");
    return 0;
}

#include<stdio.h>
#include<string.h>
char str[100000001],vis[100000001]={0};
int main(){
	int n,i,j,t,abs=1;
	scanf("%s",&str);
	n=strlen(str);
	for(i=0;i<n;i++){
		t=str[i];vis[i]=1;
		for(j=i;j<n;j++){
			if(vis[j]==0&&str[j]==t)
			abs=0;
		}
	}
	if(abs)printf("YES");
	else printf("NO");
	return 0;
} 

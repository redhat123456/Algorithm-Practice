#include<bits/stdc++.h>
using namespace std;
const int N=100;
int n,dis[N][N],anss;
struct node{
	int x,y;
}a[N];
int main()
{
	scanf("%d",&n);
	for (int i=1;i<=n;i++) 
	scanf("%d%d",&a[i].x,&a[i].y);
	for (int i=1;i<=n;i++)
	  for (int j=1;j<=n;j++)
	  	dis[i][j]=abs(a[i].x-a[j].x)+abs(a[i].y-a[j].y); 
	for (int k=1;k<=n;k++) 
	  for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++)
		  dis[i][j]=min(dis[i][j],max(dis[i][k],dis[k][j]));
	for (int i=1;i<=n;i++)
	  for (int j=1;j<=n;j++)
	  	anss=max(anss,dis[i][j]);
	printf("%d\n",(anss+1)/2);
	return 0; 
}


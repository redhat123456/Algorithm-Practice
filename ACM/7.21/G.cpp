#include<stdio.h>
int n,m;
char mp[51][51];
int vis[51][51];
int dx[]={-1,1,0,0},dy[]={0,0,1,-1};
int ans=0,step=0,min=999999;
void dfs(int x,int y,int step){
	if(x<0||x>=n||y<0||y>m) return ;
	if(x==n-1&&y==m-1){ans=1;
	if(step<min) min=step;
	return ;}
	for(int i=0;i<4;i++){
		int nowx=x+dx[i];
		int nowy=y+dy[i];
		if(mp[nowx][nowy]=='*'&&vis[nowx][nowy]==0){
			vis[nowx][nowy]=1;
			dfs(nowx,nowy,step+1);
			vis[nowx][nowy]=0;
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	scanf("%s",mp[i]);
	dfs(0,0,0);
	printf("%d",min);
	return 0;
}

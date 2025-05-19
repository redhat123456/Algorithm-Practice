#include<bits/stdc++.h>
using namespace std;
struct node {
    int x,y,step;
	node(int _a,int _b,int _c){
		 x=_a ; y=_b ; step=_c;
	}
};
int n,m;
char mp[51][51];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int vis[51][51]={0};
int bfs(){
	queue<node> q;
	q.push(node(0,0,0));
	while(!q.empty()){
		node f=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nowx=f.x+dx[i];
			int nowy=f.y+dy[i];
			if(nowx==n-1&&nowy==m-1)
			return f.step+1;
			if(nowx<0||nowy<0||nowx>n-1||nowy>m-1)
			continue;
			if(mp[nowx][nowy]=='*'||vis[nowx][nowy]==0){
				q.push(node(nowx,nowy,f.step+1));
				vis[nowx][nowy]==1;
			}
		}
	}
}

int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++)
	cin>>mp[i];
	cout<<bfs()<<endl;
	return 0;
}

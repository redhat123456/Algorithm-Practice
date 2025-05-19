/*#include<iostream>
using namespace std;
int vis[51][51]={0};
char map[51][51];
int n,m;
int step=0,ans=0,mn=999999;
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
void dfs(int x,int y,int step){
	if(x<0||y<0||x>n||y>m) return ;
	if(x==n-1&&y==m-1){ans=1;
		if(step<mn)
		mn = step;
		return ;
	}
	for(int i=0;i<4;i++){
		int nowx=x+dx[i];
		int nowy=y+dy[i];
		if(map[nowx][nowy]=='*'&&vis[nowx][nowy]==0){
			vis[nowx][nowy]=1;
			dfs(nowx,nowy,step+1);
			vis[nowx][nowy]=0;
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<5;i++)
	cin>>map[i];
	dfs(0,0,0);
	cout<<mn<<endl;
	return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
int a,b;
struct node {
    int x,step;
    node(int _a,int _b){x=_a,step=_b;}
};
int bfs()
{
    queue<node> q;
    q.push(node(a,0));
    while(!q.empty()){
        node f=q.front();
        q.pop();
        if(f.x==b) return f.step;
        q.push(node(f.x*2,f.step+1));
        q.push(node(f.x+1,f.step+1));
        q.push(node(f.x-1,f.step+1));
    }
}
int main()
{
    cin>>a>>b;
    cout<<bfs();

    return 0;
}*/

/*#include<iostream>
using namespace std;
int mn=999999,m,n;
int vis[10000]={0};
int dx[]={1,-1,2};
void dfs(int x,int step){
	cout<<x<<" "<<step<<endl;
	if(x<0||x>=3*m) return ;
	if(x==n){
		if(step<mn)
			mn = step;
		return ;
	}
	for(int i=0;i<3;i++){
		if(vis[x+1]==0){
		vis[x+1]=1;
		dfs(x+1,step+1);
		vis[x+1]=0;
		}
		if(vis[x-1]==0){
		vis[x-1]=1;
		dfs(x-1,step+1);
		vis[x-1]=0;
		}
		if(vis[2*x]==0){
		vis[2*x]=1;
		dfs(2*x,step+1);
		vis[2*x]=0;
		}
	}
}

int main(){
	cin>>m>>n;
	dfs(m,0);
	cout<<mn<<endl;
}*/

#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,step;
	node(int _a,int _b){
		x =_a; step=_b;
	}
};
int m,n;
int bfs(){

	queue<node> q;
	q.push(node(m,0));
	while(!q.empty()){
		node f=q.front();
		q.pop();
	cout<<f.x<<" "<<f.step<<endl;
	if(f.x==n) return f.step;
	q.push(node(f.x+1,f.step+1));
	q.push(node(f.x-1,f.step+1));
	q.push(node(f.x*2,f.step+1));
	}
}

int main(){
	cin>>m>>n;
	cout<<bfs()<<endl;
	return 0;
}

/***
x坐标轴上，起点在a，终点b，3种操作：
1. x=x*2
2. x=x+1
3. x=x-1

2->4 x=x*2
2->5 x*2  x+1
*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
struct node {
    int x,y,step;
    node(int _a,int _b,int _c){x=_a,y=_b,step=_c;}
};
string mp[57];
int vis[57][57];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int bfs()
{
    queue<node> q;
    q.push(node(0,0,0));
    while(!q.empty()){
        node f=q.front();
        q.pop();

        for(int i=0;i<4;i++){
            int nowx=f.x+dx[i];
            int nowy=f.y+dy[i];

            if(nowx<0||nowy<0||nowx>=n||nowy>=m)
                continue;
            if(nowx==n-1&&nowy==m-1)
                return f.step+1;

            if(mp[nowx][nowy]=='*'&&vis[nowx][nowy]==0)
            {
                q.push(node(nowx,nowy,f.step+1));
                vis[nowx][nowy]=1;
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>mp[i];

    cout<<bfs();

    return 0;
}


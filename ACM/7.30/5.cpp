//1310 bfs
#include <bits/stdc++.h>
using namespace std;
char mp[207][207];
int n,m,t;

struct node{
    int x,y;
    node(int a1,int a2){x=a1,y=a2;}
};
int dy[]={1,2,1,2};
int dx[]={2,1,-2,-1};
int ans=0;
int bfs()
{
    queue<node> q;
    q.push(node(0,0));
    while(q.size()){
        node f=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nowx=f.x+dx[i];
            int nowy=f.y+dy[i];
            if(nowx<0||nowy<0||nowx>n||nowy>m) continue;
            if(nowx==n&&nowy==m){
                ans++;
                continue;
            }
            q.push(node(nowx,nowy));
        }
    }
}
int main()
{
    cin>>n>>m;
    bfs();
    cout<<ans;
    return 0;
}

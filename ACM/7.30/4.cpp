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
int vis[20][20];
vector<node> R;
void dfs(int x,int y)
{
    if(x==n&&y==m) {
        ans++;
        R.size();
        for(node e:R){
            cout<<"->"<<e.x<<' '<<e.y;
        }
        cout<<endl;
    }
    for(int i=0;i<4;i++){
        int nowx=x+dx[i];
        int nowy=y+dy[i];
        if(nowx<0||nowy<0||nowx>n||nowy>m) continue;
        if(vis[nowx][nowy]==0){
            vis[nowx][nowy]=1;
            R.push_back(node(nowx,nowy));
            dfs(nowx,nowy);
            R.pop_back();
            vis[nowx][nowy]=0;
        }
    }
}
int main()
{
    cin>>n>>m;
    dfs(0,0);
    cout<<ans;
    return 0;
}

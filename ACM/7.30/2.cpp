//1106 bfs
#include <bits/stdc++.h>
using namespace std;
char mp[207][207];
int n,m,t;
int stx,sty,edx,edy;
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
int ans= 1e9;
int vis[207][207];
void dfs(int x,int y,int k,int s)
{
    if(x<0||y<0||x>=n||y>=m) return ;

    for(int i=0;i<4;i++){
        int nowx = x+dx[i];
        int nowy = y+dy[i];

        if(vis[nowx][nowy]) continue;
        if(mp[nowx][nowy]=='*')
        {
            vis[nowx][nowy]=1;
            dfs(nowx,nowy,k,s+1);
            vis[nowx][nowy]=0;
        }
        else if(mp[nowx][nowy]=='#'&&k>0){
                vis[nowx][nowy]=1;
                dfs(nowx,nowy,k-1,s+1);
                vis[nowx][nowy]=0;
        }

        else if(mp[nowx][nowy]=='+')
        {
            ans=min(ans,s+1);
            //dfs(nowx,nowy,k,s+1);
        }
    }

}
int main()
{
    cin>>n>>m>>t;
    for(int i=0;i<n;i++)
        scanf("%s",mp[i]);
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        if(mp[i][j]=='@')
            stx=i,sty=j;
        else if(mp[i][j]=='*')
            edx=i,edy=j;
    }
    dfs(stx,sty,t,0);

    cout<<ans;
    return 0;
}

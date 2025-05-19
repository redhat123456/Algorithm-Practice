//1248 bfs
#include <bits/stdc++.h>
using namespace std;
char mp[2007][2007];
int n,m,k;
int stx,sty,edx,edy;
struct node{
    int x,y;
    int s;
    node(int a1,int a2,int a3){
        x=a1,y=a2,s=a3;
    }
};
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
int vis[2007][2007];
int bfs(){
    queue<node> q;
    q.push(node(stx,sty,0));
    while(q.size()){
        node f=q.front();
        q.pop();
        //cout<<f.x<<' '<<f.y<<' '<<f.s<<endl;
        for(int i=0;i<4;i++){
            for(int kk=1;kk<=k;kk++){
                int nowx=f.x+dx[i]*kk;
                int nowy=f.y+dy[i]*kk;

                if(nowx<0||nowy<0||nowx>=n||nowy>=m) continue;

                if(mp[nowx][nowy]=='#')
                    break;
                if(nowx==edx&&nowy==edy)
                    return f.s+1;
                if(vis[nowx][nowy]==0&&mp[nowx][nowy]=='.')
                    q.push(node(nowx,nowy,f.s+1));
                vis[nowx][nowy]=1;
            }
        }
    }
    return -1;

}
int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
        scanf("%s",mp[i]);
    cin>>stx>>sty>>edx>>edy;
    stx--;
    sty--;
    edx--;
    edy--;
    cout<<bfs();


    return 0;
}

//1311 bfs
#include <bits/stdc++.h>
using namespace std;

int n,a,b;

int k[100000];
struct node {
    int lev;
    int s;
    node(int a1,int a2){lev=a1;s=a2;}
};
int vis[100000];
int bfs()
{
    queue<node> q;
    q.push(node(a,0));
    while(!q.empty()){
        node f=q.front();
        q.pop();
        if(f.lev==b) return f.s;
        int lev1=f.lev+k[f.lev];
        int lev2=f.lev-k[f.lev];
        if(lev1>=1&&lev1<=n&&!vis[lev1]){
            vis[lev1]=1;
            q.push(node(lev1,f.s+1));
        }
        if(lev2>=1&&lev2<=n&&!vis[lev2]){
             vis[lev1]=2;
            q.push(node(lev2,f.s+1));
        }
    }
    return -1;
}
int main()
{
    cin>>n>>a>>b;

    for(int i=1;i<=n;i++) cin>>k[i];
    cout<<bfs();
    return 0;
}

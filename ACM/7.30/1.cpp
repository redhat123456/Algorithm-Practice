//1106 bfs广度搜索和深度搜索 
#include <bits/stdc++.h>
using namespace std;
char mp[207][207];
int n,m,t;
int stx,sty,edx,edy;
struct node{//定义node队列 
    int x,y;
    int k,step;
    node(int a1,int a2,int a3,int a4){
        x=a1,y=a2,k=a3,step=a4;
    }
};
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
int BFS(){
    queue<node> q;//简写 
    q.push(node(stx,sty,t,0));//push取出队列的队首 
    while(q.size()){
        node f=q.front();// 
        q.pop();
        for(int i=0;i<4;i++){
            int nowx=f.x+dx[i];
            int nowy=f.y+dy[i];
            if(nowx<0||nowy<0||nowx>=n||nowy>=m)
                continue;
            if(mp[nowx][nowy]=='*'){
                q.push(node(nowx,nowy,f.k,f.step+1));
            }
            if(mp[nowx][nowy]=='#'&&f.k>0){
                q.push(node(nowx,nowy,f.k-1,f.step+1));
            }
            if(mp[nowx][nowy]=='+'){
                return f.step+1;
            }
        }
    }
    return -1;
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
    cout<<BFS()<<endl;

    return 0;
}

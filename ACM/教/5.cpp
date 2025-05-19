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
int a,b;
struct node {
    int x,step;
    node(int a,int b){x=a,step=b;}
};
int bfs()
{
    queue<node> q;
    q.push(node(a,0));
    while(!q.empty()){
        node f=q.front();   
	 	cout<<f.x<<endl;
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
}


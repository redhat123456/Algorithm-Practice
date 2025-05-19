
#include<bits/stdc++.h>
using namespace std;
int n,k;
int num[20];
int ans=0;
void dfs(int pos,int Sum){
    if(pos==n-1) {
        if(Sum==k) ans=1;
    }
    else {
        dfs(pos+1,Sum+num[pos+1]);
        dfs(pos+1,Sum);
    }
}
int  main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>num[i];
    dfs(0,num[0]);
    dfs(0,0);
    if(ans) puts("Y");
    else puts("N");
    return 0;
}


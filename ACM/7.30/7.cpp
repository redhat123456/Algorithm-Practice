//1311 dfs
#include <bits/stdc++.h>
using namespace std;

int n,a,b;

int k[100000];

int ans=0;
int vis[100000];
vector<int> R;
void dfs(int lev){
    if(lev<1||lev>n) return;
    if(lev==b) {ans++;
        for(int e:R){
            cout<<"->"<<e;
        }
        cout<<endl;
return ;
    }
    int lev1=lev+k[lev];
    int lev2=lev-k[lev];
    if(lev1>=1&&lev1<=n&&!vis[lev1]){
        R.push_back(lev1);
        vis[lev1]=1;
        dfs(lev1);
        vis[lev1]=0;
        R.pop_back();
    }

    if(lev2>=1&&lev2<=n&&!vis[lev2]){
        R.push_back(lev2);
        vis[lev2]=1;
        dfs(lev2);
        vis[lev2]=0;
        R.pop_back();
    }
}
int main()
{
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++) cin>>k[i];
    dfs(a);
    cout<<ans<<endl;
    return 0;
}

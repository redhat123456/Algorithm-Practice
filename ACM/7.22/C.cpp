#include<iostream>//(ษ๎หั)
using namespace std;
int n,k,ans=0;
void dfs(int past,int cnt,int num)
{
    if(cnt==1)
    {
        ans++;
        return;
    }
    for(int i=past;i<=num/cnt;i++)
    dfs(i,cnt-1,num-i);
}
int main()
{
    cin>>n>>k;
    dfs(1,k,n);
    cout<<ans;
    return 0;
}

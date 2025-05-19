// TODO (zx#1#): 神奇的四次方数
#include<bits/stdc++.h>
using namespace std;
int dp[100005],a[20];
main()
{
    int m;
    cin>>m;
    for(int i=0;i<18;i++)
        a[i]=pow(i,4);
    for(int i=0;i<=m;i++) dp[i]=1e9;

    dp[0]=0;
    for(int i=0;i<=m;i++)
        for(int j=0;j<18;j++)
            if(i-a[j]>=0)
                dp[i]=min(dp[i],dp[i-a[j]]+1);

    cout<<dp[m]<<endl;
 }

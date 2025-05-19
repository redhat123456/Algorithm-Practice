#include<bits/stdc++.h>
using namespace std;
int dp[20][20],n;
int  main()
{
    cin>>n;
    for(int i=0;i<20;i++)
        dp[0][i]=1;

    for(int i=1;i<=n;i++)
    for(int j=0;j<=n;j++){
        if(j==0)dp[i][j]=dp[i-1][j+1];
        else dp[i][j]=dp[i-1][j+1]+dp[i][j-1];
    }
    cout<<dp[n][0];
    return 0;
}

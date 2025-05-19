
#include<bits/stdc++.h>
using namespace std;
int dp[100007],n;///dp[i] 把i分解成四次方和 n最小为dp[i]
int f[20];
int  main()
{
    //706+16    625+81
    cin>>n;
    for(int i=0;i<20;i++) f[i]=i*i*i*i;
    for(int i=1;i<=n;i++)
    {
        dp[i]=1e9;
        for(int j=1;j<20;j++)
        {
            if(i-f[j]>=0){
                    if(dp[i]>dp[i-f[j]]+1){
                        dp[i]=dp[i-f[j]]+1;
                        //printf("dp[%d]= dp[%d-%d]+1\n",i,i,f[j]);
                    }
            }

        }
    }
    cout<<dp[n];
    return 0;
}

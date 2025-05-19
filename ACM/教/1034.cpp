// TODO (zx#1#): 1304: 栈

#include <bits/stdc++.h>
using namespace std;
int dp[20][20];//(栈中i个，输出j个)
int main()
{
    int m;
    cin>>m;
    for(int i=0;i<=m;i++) dp[i][0]=1;
    for(int j=1;j<=m;j++){
        for(int i=0;i<=m;i++){
                dp[i][j]=dp[i+1][j-1];
                if(i!=0)
                    dp[i][j]+=dp[i-1][j];
            }
    }
    cout<<dp[0][m]<<endl;


    return 0;
}




#include<bits/stdc++.h>
using namespace std;
int n,k;
int num[20];
int ans=0;
int  main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>num[i];
//
//
//1:  0000001
//2:  0000010
//    1001010
//4:  0001000
//    0001000
//
//    0000000
//    1111111
//    10000000-1=1111111
//    00000001
//    0000000
//    ...
//    1000001
//    ...
//    1111111
//
//
//
//    i:      0000101
//    1<<0:   0000001
//    1<<1:   0000010
//    1<<n    1000000
    for(int i=0;i<=(1<<n)-1;i++){
        int sum=0;
        for(int j=0;j<=n;j++){
            if(i&(1<<j))
                sum+=num[j];
        }
        if(sum==k) ans=1;
    }
    if(ans) puts("Y");
    else puts("N");
    return 0;
}


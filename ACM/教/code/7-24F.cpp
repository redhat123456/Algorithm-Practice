

#include<bits/stdc++.h>
using namespace std;
int n,k,t;
int f[100000];
//int fib(int a){
//    if(a==1||a==2) return 1;
//    else return fib(a-1)+fib(a-2);
//}
int  main()
{
    cin>>t;
    f[1]=f[2]=1;
    for(int i=3;i<100000;i++) f[i]=f[i-1]+f[i-2];
    while(t--){
        cin>>n;
        cout<<f[n]<<endl;
    }

    return 0;
}


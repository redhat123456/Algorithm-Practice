#include<bits/stdc++.h>
using namespace std;
#define ll long long
//2^6 = 2*2*2*2*2*2 O(n)
//
///2^6 = 2^3*2^3
//2^6 = (2^2*2) * (2^2*2)
//    =8*8
//    O(log(n))
///2^7= 2^3 *2^3 *2
#define mod 1000000007
ll qpow(ll a,ll b){
    if(b==1) return a%mod;
    ll t=qpow(a,b/2)%mod;

    if(b&1) return (t*t%mod)*a%mod;
    else return t*t%mod;
}
int main(){
    ll n,m,t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<qpow(qpow(2,m)-1,n)<<endl;;
    }

    //(2^m-1)^n;

    return 0;
}

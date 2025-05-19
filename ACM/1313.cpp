// TODO (zx#1#): 1313: 有理数算术

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,c,d;
string tos(ll a,ll b){
   // -16/12
    if(a==0) return to_string(0);
    bool f=0;
    if((a<0&&b>0)||(a>0&&b<0)){
        f=1;
    }
    a=abs(a);//16
    b=abs(b);//12
    ll tgcd=__gcd(a,b);//4
    a=a/tgcd;//16/4=4
    b=b/tgcd;//12/4=3

    string ans;
    if(f) ans="(-";
   // "(-1 1/3)"
    if(a>=b) ans+=to_string(a/b);//1+1/3
    if(a%b!=0){
        if(a>b) ans+=' ';
        ans+=to_string(a%b)+'/'+to_string(b);
    }

    if(f) ans+=')';
    return ans;
}
string add(ll a,ll b,ll c,ll d){
    a=a*d+c*b;
    b=b*d;
    return tos(a,b);
}
string jian(ll a,ll b,ll c,ll d){
    a=a*d-c*b;
    b=b*d;
    return tos(a,b);
}
string cheng(ll a,ll b,ll c,ll d){
    a=a*c;
    b=b*d;
    return tos(a,b);
}

string chu(ll a,ll b,ll c,ll d){
    if(c==0) return "Inf";
    a=a*d;
    b=b*c;
    return tos(a,b);
}
int main()
{
    scanf("%lld/%lld%lld/%lld",&a,&b,&c,&d);
    cout<<tos(a,b)<<" + "<<tos(c,d)<<" = " <<add(a,b,c,d)<<endl;
    cout<<tos(a,b)<<" - "<<tos(c,d)<<" = " <<jian(a,b,c,d)<<endl;
    cout<<tos(a,b)<<" * "<<tos(c,d)<<" = " <<cheng(a,b,c,d)<<endl;
    cout<<tos(a,b)<<" / "<<tos(c,d)<<" = " <<chu(a,b,c,d);
    return 0;
}


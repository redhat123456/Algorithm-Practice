#include <bits/stdc++.h>
using namespace std;
string s[107];
bool cmp(string a,string b){
    return a>b;
}
int main()
{
    s[0]="123";
    s[1]="456";
    s[2]="012";
    s[3]="5";
    s[4]="3";

    sort(s,s+5,cmp);
    for(string e:s) cout<<e<<endl;
    return 0;
}

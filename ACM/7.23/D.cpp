#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;

stack<int> a;
int main(){
  int n;
  cin>>n;
  while(n--)
  {

      char x;
      cin>>x;
      if(x=='p') {int y;cin>>y;a.push(y);}
      else
        if(x=='t')
      {

          if(a.size()) cout<<a.top()<<endl;
          else cout<<"no"<<endl;
      }
      else
      {

          if(a.size()) a.pop();
      }
  }
}

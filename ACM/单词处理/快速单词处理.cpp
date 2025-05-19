#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
string s;
getline(cin,s);
stringstream ss(s);
string r="", t;
while (ss>>t)
{
  if (r == "")
      r=t;
  else
      r=t+" "+r;
 }
   cout<<r<<endl;
   return 0;
}

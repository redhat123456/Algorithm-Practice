#include <iostream>//只要边输入边看这个方向是不是朝着终点。如果是，就动。否则就不动。 
using namespace std;
int x,y,x1,y1,n,s=0;
char a;
int l=0;
int main()
{
    cin>>x>>y>>x1>>y1;
    cin>>n;
    if(x==x1&&y==y1){cout<<'0';return 0;}
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(x1-x>0&&a=='E')x++,s++;
        else if(x1-x<0&&a=='W')x--,s++;
        if(y1-y>0&&a=='N')y++,s++;
        else if(y1-y<0&&a=='S')y--,s++;
    }
    if(x==x1&&y==y1)cout<<s;
    else cout<<"-1";
    return 0;
}

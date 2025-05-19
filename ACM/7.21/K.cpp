#include<cstdio>
using namespace std;
long long now,ans,p=1e9+7;
int t,n;
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		ans=0;now=1;
		for(int i=0;i<=n;i++){
			ans+=now*(n+1-i)%p;
			ans%=p;
			now=(now*2)%p;
		}
		printf("%lld\n",ans);
	}
	return 0;
} 

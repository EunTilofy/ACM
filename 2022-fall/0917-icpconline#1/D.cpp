#include<bits/stdc++.h>
using namespace std;
int T,a,y,x,i,l,v1,v0,ans,b[35],cnt;
int main() {
	scanf("%d",&T);
	while(T--) {
		scanf("%d%d",&a,&y),ans=-1;
		if(a>=4e8){
		v0=lower_bound(r2,r2+231493,a)-r2;
		if(a<=r2[v0]&&r2[v0]<=y)ans=r2[v0];
		}
		printf("%d\n",ans);
	}
	return 0;
}
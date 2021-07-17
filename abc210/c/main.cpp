#include<bits/stdc++.h>
using namespace std;
int n,k,a[300010],ans,ss;
map<int,int>s;
int main() {
	scanf("%d%d",&n,&k);
	for (int i=1; i<=n; i++) {
		scanf("%d",&a[i]);
		ss+=!(s[a[i]]++);
		if(i>k) ss-=!(--s[a[i-k]]);
		if(i>=k) ans=max(ans,ss);
	}
	return printf("%d\n",ans),0;
}
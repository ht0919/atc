#include<cstdio>
int n,a;
int s[200];
long long ans;
int main() {
	scanf("%d",&n);
	for (int i=1; i<=n; i++) {
		scanf("%d",&a);
		a%=200;
		ans+=s[a];
		s[a]++;
	}
	printf("%lld\n",ans);
	return 0;
}
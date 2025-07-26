#include<cstdio>
const int N=2e5+10;
int n,cnt;
bool b[N];
int main() {
	scanf("%d",&n);
	for (int i=1,a; i<=n; i++) {
		scanf("%d",&a);
		if (!b[i]) b[a]=1;
	}
	for (int i=1; i<=n; i++) if (!b[i]) cnt++;
	printf("%d\n",cnt);
	for (int i=1; i<=n; i++) {
		if (!b[i]) printf("%d ",i);
	}
	return 0;
}
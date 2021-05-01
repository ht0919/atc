#include<bits/stdc++.h>
using namespace std;
int n,ans,mn,h[5],mx[5],a[3002][5];
int main() {
	scanf("%d",&n);
	for (int i=0; i<n; ++i)
		for (int j=0; j<5; ++j) {
			scanf("%d",&a[i][j]);
			if (a[i][j]>a[h[j]][j]) h[j]=i;
		}
	for (int i=0; i<n-1; ++i)
		for (int j=i+1; j<n; ++j) {
			memset(mx, 0, sizeof(mx));
			for (int k=0; k<5; ++k) {
				for (int l=0; l<5; ++l) mx[l]=max(max(a[i][l],a[j][l]),a[h[k]][l]);
				mn=1e9+5;
				for (int l=0; l<5; ++l) mn=min(mn,mx[l]);
				ans=max(ans,mn);
			}
		}
	printf("%d\n",ans);
	return 0;
}
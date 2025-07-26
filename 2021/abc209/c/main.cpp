#include<bits/stdc++.h>
using namespace std;
int n,c[200010];
long long ans=1;
int main() {
	cin>>n;
	for(int i=0; i<n; i++) cin>>c[i];
	sort(c,c+n);
	for(int i=0; i<n; i++) {
		ans = ans * (c[i]-i) % 1000000007;
	}
	cout<<ans<<endl;
	return 0;
}
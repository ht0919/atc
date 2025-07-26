#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll ans;
map<int,int> mp;
int main() {
	cin>>n;
	for (int i=1,x; i<=n; i++) {
		cin>>x;
		ans += mp[x]++;
	}
	cout<<1ll*n*(n-1)/2-ans<<endl;
  return 0;
}
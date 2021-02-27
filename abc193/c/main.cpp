#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n; cin>>n;
	set<ll>s;
	for (ll i=2; i*i<=n; i++)
		for (ll cur=i*i; cur<=n; cur*=i)
      s.insert(cur);
	cout<<n-s.size()<<endl;
  return 0;
}
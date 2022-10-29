#include<bits/stdc++.h>
using namespace std;
const int m=998244353;
long long a,b,c,d,e,f;
int main() {
	cin>>a>>b>>c>>d>>e>>f;
	cout<<(((((((a%m)*(b%m))%m)*(c%m))%m)-(((((d%m)*(e%m))%m)*(f%m))%m))%m+m)%m;
	return 0;
}
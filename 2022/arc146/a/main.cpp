#include <bits/stdc++.h>
using namespace std;
int n;
string s[200005];
bool cmp(string a,string b) {
	if (a.size() != b.size()) {
		return a.size()>b.size();
	}
	return a>b;
}
int main() {
	cin>>n;
	for(int i=1;i<=n;i++) cin>>s[i];
	sort(s+1,s+n+1,cmp);
	sort(s+1,s+4);
	cout<<s[3]<<s[2]<<s[1]<<endl;
}
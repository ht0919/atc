#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin>>n;
	map<string,int> mp; string s;
	while (n--) {
		int a; cin>>a;
		getline(cin,s);
		mp[s]=1;
	}
	cout<<mp.size()<<endl;
    return 0;
}
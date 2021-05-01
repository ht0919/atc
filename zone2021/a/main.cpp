#include<bits/stdc++.h>
using namespace std;
string s;
int ans=0;
int main() {
	cin>>s;
	for(int i=0;i+3<s.size();++i)
	    if(s.substr(i,4)=="ZONe")
            ++ans;
	cout<<ans<<endl;
    return 0;
}
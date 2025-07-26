#include<bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
	if (S[0]=='1'||S=="0000000000") {
    cout<<"No"<<endl;
	} else {
		if ((S[1]=='0'&&S[7]=='0')||(S[2]=='0'&&S[8]=='0')||(S[0]=='0'&&S[4]=='0')) {
      cout<<"Yes"<<endl;
    } else {
      cout<<"No"<<endl;
    }
	}
	return 0;
}
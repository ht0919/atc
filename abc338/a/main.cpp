#include <bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  bool f=true;
  if (S[0]>=0x41 && S[0]<=0x5a) {
    for (int i=1; i<S.length(); i++) {
      if (S[i]>=0x41 && S[i]<=0x5a) {
        f=false;
        break;
      }
    }
  } else {
    f=false;
  }
  if (f) cout<<"Yes"<<endl;
  else   cout<<"No"<<endl;
  return 0;
}
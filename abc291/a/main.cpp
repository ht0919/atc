#include <bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  int ans=0;
  for (int i=0; i<S.length(); i++) {
    if (S[i]<0x5b) {
      ans=i+1;
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
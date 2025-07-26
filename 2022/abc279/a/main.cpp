#include <bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  int ans=0;
  for (int i=0; i<S.length(); i++) {
    if (S[i] == 'v') {
      ans += 1;
    } else {
      ans += 2;
    }
  }
  cout<<ans<<endl;
  return 0;
}

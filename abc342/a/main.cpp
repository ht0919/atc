#include <bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  int ans;
  char a = S[0];
  for (int i=1; i<S.length(); i++) {
    if (a != S[i]) {
      if (i==1) {
        if (a == S[2]) ans = 2;
        else ans = 1;
      } else if (i == S.length()-1) {
        if (a == S[i-2]) ans = i + 1;
        else ans = i-1;
      } else {
        ans = i + 1;
      }
      break;
    }
    a = S[i];
  }
  cout<<ans<<endl;
  return 0;
}
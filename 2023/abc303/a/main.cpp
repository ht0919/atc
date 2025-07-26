#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; string S,T; cin>>N>>S>>T;
  string ans="Yes";
  for (int i=0; i<N; i++) {
    if (S[i]!=T[i]) {
      if (S[i]=='1' && T[i]=='l') continue;
      if (S[i]=='l' && T[i]=='1') continue;
      if (S[i]=='0' && T[i]=='o') continue;
      if (S[i]=='o' && T[i]=='0') continue;
      ans="No"; break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
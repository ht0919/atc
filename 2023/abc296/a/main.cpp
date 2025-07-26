#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; string S; cin>>N>>S;
  string ans="Yes";
  char before='A';
  for (int i=0; i<N; i++) {
    if (before==S[i]) {
      ans="No";
      break;
    }
    before = S[i];
  }
  cout<<ans<<endl;
  return 0;
}
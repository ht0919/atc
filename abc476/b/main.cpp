#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  string S,T,ans="Yes";
  cin>>N>>S>>T;
  for (int i=0; i<N; i++) {
    if (S[i]==T[i] || T[i]=='*')
      continue;
    else {
      ans="No";
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}

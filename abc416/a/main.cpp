#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,L,R; cin>>N>>L>>R;
  string S,ans="Yes"; cin>>S;
  for (int i=L-1; i<R; i++) {
    if (S[i]!='o') {
      ans="No";
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}

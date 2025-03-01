#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin>>N;
  string ans="Yes";
  int O; cin>>O;
  for (int i=1; i<N; i++) {
    int A; cin>>A;
    if (O<A) {
      O=A;
      continue;
    } else {
      ans="No";
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
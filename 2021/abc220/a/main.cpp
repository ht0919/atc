#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B,C,ans=-1; cin>>A>>B>>C;
  for (int i=A; i<=B; i++) {
    if (C>=A && C<=B) {
      ans=C;
      break;
    }
    C += C;
  }
  cout<<ans<<endl;
  return 0;
}
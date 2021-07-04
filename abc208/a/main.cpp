#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B; cin>>A>>B;
  string ans="No";
  if (B<=A*6 && B>=A) {
    ans="Yes";
  }
  cout<<ans<<endl;
  return 0;
}

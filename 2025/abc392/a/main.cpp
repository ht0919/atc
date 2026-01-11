#include <bits/stdc++.h>
using namespace std;
int main() {
  int A1,A2,A3; cin>>A1>>A2>>A3;
  string ans="No";
  if (A1 == A2 * A3) ans = "Yes";
  if (A2 == A1 * A3) ans = "Yes";
  if (A3 == A1 * A2) ans = "Yes";
  cout<<ans<<endl;
  return 0;
}
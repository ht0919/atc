#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,T,A; cin>>N>>T>>A;
  string ans="No";
  if (T>N/2 || A>N/2) ans="Yes";
  cout<<ans<<endl;
  return 0;
}
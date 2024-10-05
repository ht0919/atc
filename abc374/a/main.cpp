#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,s,ans="No"; cin>>S;
  copy(S.end() - 3, S.end(), back_inserter(s));
  if (s=="san") ans="Yes";
  cout<<ans<<endl;
  return 0;
}
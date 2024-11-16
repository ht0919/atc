#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,ans="No"; cin>>S;
  sort(S.begin(), S.end());
  if (S=="122333") ans="Yes";
  cout<<ans<<endl;
  return 0;
}
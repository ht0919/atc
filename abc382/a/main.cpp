#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,D,ans=0; cin>>N>>D;
  string S; cin>>S;
  for (int i=0; i<N; i++) {
    if (S[i]=='.') ans++;
  }
  ans = ans + D;
  cout<<ans<<endl;
  return 0;
}
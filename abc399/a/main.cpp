#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,ans=0; cin>>N;
  string S,T; cin>>S>>T;
  for (int i=0; i<N; i++) {
    if (S[i]!=T[i]) ans++;
  }
  cout<<ans<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,ans=0; string S; cin>>N>>S;
  for (int i=0; i<N-2; i++) {
    if (S[i+0]=='#' && S[i+1]=='.' && S[i+2]=='#') {
      ans++;
    }
  }
  cout<<ans<<endl;
  return 0;
}
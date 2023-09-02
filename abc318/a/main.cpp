#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,M,P,Q=0,ans=0; cin>>N>>M>>P;
  for (int i=1; i<=N; i++) {
    if (i == M+Q) {
      ans++;
      Q=Q+P;
    }
  }
  cout<<ans<<endl;
  return 0;
}
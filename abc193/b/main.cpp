#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin>>N;
  int A,P,X,ans=1000000000;
  for (int i=0; i<N; i++) {
    cin>>A>>P>>X;
    if ((X-A)>0) ans = min(P,ans);
  }
  if (ans!=1000000000) cout<<ans<<endl;
  else cout<<-1<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,L,A,ans=0; cin>>N>>L;
  for (int i=0; i<N; i++) {
    cin>>A;
    if (A>=L) ans++;
  }
  cout<<ans<<endl;
  return 0;
}
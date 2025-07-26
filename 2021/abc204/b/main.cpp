#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,A,ans=0; cin>>N;
  for (int i=0; i<N; i++) {
    cin>>A;
    if (A>10) ans+=A-10;
  }
  cout<<ans<<endl;
  return 0;
}
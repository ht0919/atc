#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,X; cin>>N>>X;
  int S,ans=0;
  for (int i=0; i<N; i++) {
    cin>>S;
    if (S<=X) ans+=S;
  }
  cout<<ans<<endl;
  return 0;
}
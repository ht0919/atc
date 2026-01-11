#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,A,B,ans=0; cin>>N;
  for (int i=0; i<N; i++) {
    cin>>A>>B;
    if (A<B) ans++;
  }
  cout<<ans<<endl;
  return 0;
}
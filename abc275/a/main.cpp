#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,H,M=0,ans; cin>>N;
  for (int i=0; i<N; i++) {
    cin>>H;
    if (M<H) {
      ans=i+1;
      M=H;
    }
  }
  cout<<ans<<endl;
  return 0;
}
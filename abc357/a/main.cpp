#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,M; cin>>N>>M;
  int H,ans=0;
  for (int i=0; i<N; i++) {
    cin>>H;
    M -= H;
    if (M<0) break;
    ans = i + 1;
  }
  cout<<ans<<endl;
  return 0;
}
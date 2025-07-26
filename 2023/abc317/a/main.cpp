#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,H,X; cin>>N>>H>>X;
  int P,ans=0;
  for (int i=0; i<N; i++) {
    cin>>P;
    if (P+H>=X) {
      ans=i+1;
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
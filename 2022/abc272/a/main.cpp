#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,ans=0; cin>>N;
  for (int i=0,j=0; i<N; i++) {
    cin>>j;
    ans += j;
  }
  cout<<ans<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,ans=0; cin>>N;
  string S;
  for (int i=0; i<N; i++) {
    cin>>S;
    if (S=="Takahashi") ans++;
  }
  cout<<ans<<endl;
  return 0;
}
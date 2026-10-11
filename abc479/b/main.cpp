#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,ans=0,max=0; cin>>N;
  string S; cin>>S;
  for (int i=0,cnt=0; i<N; i++) {
    if (S[i]=='S') cnt=0;
    else cnt++;
    if (ans<cnt) ans=cnt;
  }
  cout<<ans<<endl;
  return 0;
}

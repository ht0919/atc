#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,C,T,B=-1,ans=0;
  cin>>N>>C;
  for (int i=0; i<N; i++) {
    cin>>T;
    if (B==-1 || T-B>=C) {
        ans++;
        B=T;
    }
  }
  cout<<ans<<endl;
  return 0;
}
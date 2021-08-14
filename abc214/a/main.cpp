#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,ans=0; cin>>N;
  if (N>=1 && N<=125) ans=4;
  else if (N>=126 && N<=211) ans=6;
  else if (N>=212 && N<=214) ans=8;
  cout<<ans<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin>>N;
  int ans=int(N/5)*5;
  if (N%5>2) ans+=5;
  cout<<ans<<endl;
  return 0;
}

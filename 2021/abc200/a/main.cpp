#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,ans=0; cin>>N;
  ans=N/100;
  if (N%100!=0) ans++;
  cout<<ans<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  double X; cin>>X;
  int ans=3;
  if (X>=38.0) ans=1;
  else if (X>=37.5 && X<38.0) ans=2;
  cout<<ans<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int X,Y; cin>>X>>Y;
  int ans = 0;
  if (Y-X >= 0) {
    ans = (Y-X)/10;
    if ((Y-X)%10>0) ans++;
  }
  cout<<ans<<endl;
  return 0;
}
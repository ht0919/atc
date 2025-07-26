#include <bits/stdc++.h>
using namespace std;
int main() {
  string n; cin>>n;
  int a,b,c,ans;
  a = n[0] - 0x30;
  b = n[1] - 0x30;
  c = n[2] - 0x30;
  ans  = a*100 + b*10 + c;
  ans += b*100 + c*10 + a;
  ans += c*100 + a*10 + b;
  cout<<ans<<endl;
  return 0;
}
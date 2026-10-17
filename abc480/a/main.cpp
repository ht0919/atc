#include <bits/stdc++.h>
using namespace std;
int main() {
  char a[2][2];
  cin>>a[0][0]>>a[0][1];
  cin>>a[1][0]>>a[1][1];
  string ans="No";

  if        (a[0][0]=='A'&&(a[0][1]=='D'||a[1][0]=='D')) {
    ans="Yes";
  } else if (a[0][1]=='A'&&(a[0][0]=='D'||a[1][1]=='D')) {
    ans="Yes";
  } else if (a[1][0]=='A'&&(a[0][0]=='D'||a[1][1]=='D')) {
    ans="Yes";
  } else if (a[1][1]=='A'&&(a[0][1]=='D'||a[1][0]=='D')) {
    ans="Yes";
  }
  cout<<ans<<endl;
  return 0;
}

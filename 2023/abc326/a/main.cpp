#include <bits/stdc++.h>
using namespace std;
int main() {
  int X,Y; cin>>X>>Y;
  string ans="Yes";
  if (X < Y) {
    if (Y-X>2) ans="No";
  } else {
    if (X-Y>3) ans="No";
  }
  cout<<ans<<endl;
  return 0;
}
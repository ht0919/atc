#include <bits/stdc++.h>
using namespace std;
int main() {
  int tbl[]={100,200,300,400};
  int R,ans; cin>>R;
  for (int i=0; i<4; i++) {
    if (R < tbl[i]) {
      ans = tbl[i] - R;
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int H,W,ans=0; cin>>H>>W;
  for (int i=0; i<H; i++) {
    string tmp;
    cin>>tmp;
    for (int j=0; j<W; j++) {
      if (tmp[j]=='#') ans++;
    }
  }
  cout<<ans<<endl;
  return 0;
}

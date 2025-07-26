#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,X,Y,Z; cin>>N>>X>>Y>>Z;
  string ans="No";
  if (Y-X>0) { // 登り
    for (int i=X; i<=Y; i++) {
      if (i==Z) {ans="Yes"; break;}
    }
  } else { // 下り
    for (int i=X; i>=Y; i--) {
      if (i==Z) {ans="Yes"; break;}
    }
  }
  cout<<ans<<endl;
  return 0;
}

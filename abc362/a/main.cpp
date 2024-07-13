#include <bits/stdc++.h>
#define C3 3
using namespace std;
int main() {
  string tbl[C3]={"Red","Green","Blue"};
  int rgb[C3],ans=100;
  for (int i=0; i<C3; i++) cin>>rgb[i];
  string C; cin>>C;
  for (int i=0; i<C3; i++) {
    if (C != tbl[i]) {
      if (rgb[i]<ans) ans=rgb[i];
    }
  }
  cout<<ans<<endl;
  return 0;
}
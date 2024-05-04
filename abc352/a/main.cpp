#include <bits/stdc++.h>
using namespace std;
#define SWAP(a, b) (a ^= b, b = a ^ b, a ^= b)
int main() {
  int N,X,Y,Z; cin>>N>>X>>Y>>Z;
  string ans="No";
  if (Y-X<0) SWAP(X,Y);
  for (int i=X; i<=Y; i++) {
    if (i==Z) {
      ans="Yes";
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
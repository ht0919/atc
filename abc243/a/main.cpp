#include <bits/stdc++.h>
using namespace std;
int main() {
  int V,A,B,C; cin>>V>>A>>B>>C;
  string ans;
  while (true) {
    V -= A;
    if (V<0) {
      ans="F"; break;
    }
    V -= B;
    if (V<0) {
      ans="M"; break;
    }
    V -= C;
    if (V<0) {
      ans="T"; break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
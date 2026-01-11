#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B,C,D; cin>> A >> B >> C >> D;
  string ans="No";
  if (A>C) {
    ans="Yes";
  } else if (A==C && B>D) {
    ans="Yes";
  }
  cout << ans << endl;
  return 0;
}
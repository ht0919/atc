#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B,C,D; cin>>A>>B>>C>>D;
  string ans="";
  if (A < C) {
    ans = "Takahashi";
  } else if (A == C && B <= D) {
    ans = "Takahashi";
  } else {
    ans = "Aoki";
  }
  cout<<ans<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  for (int i=0; i<S.length(); i++) {
    S[i] = S[i] - 0x20;
  }
  cout<<S<<endl;
  return 0;
}
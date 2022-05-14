#include <bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  for (int i=0; S.size()<7; i++) {
    S += S;
  }
  cout<<S.substr(0,6)<<endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,ans=""; cin>>S;
  for (int i=0; i<S.size(); i++) {
    if (S[i]!='.') ans+=S[i];
  }
  cout<<ans<<endl;
  return 0;
}
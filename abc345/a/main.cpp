#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,ans="No"; cin>>S;
  if (S[0]=='<' && S[S.length()-1]=='>') {
    for (int i=1; i<S.length()-1; i++) {
      ans="Yes";
      if (S[i]=='<' || S[i]=='>') {
        ans="No";
        break;
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
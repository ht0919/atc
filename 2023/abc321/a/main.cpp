#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,ans="Yes"; cin>>S;
  for (int i=0; i<S.length()-1; i++) {
    if (S[i]<=S[i+1]) {
      ans="No";
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}

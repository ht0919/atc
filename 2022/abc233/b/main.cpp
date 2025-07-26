#include <bits/stdc++.h>
using namespace std;
int main() {
  int L,R; string S; cin>>L>>R>>S;
  L--;R--;
  string tmp = S.substr(L,(R-L)+1);
  for (int i=0,j=tmp.size()-1; i<S.size(); i++) {
    if (i>=L && i<=R) {
      S[i]=tmp[j]; j--;
    }
  }
  cout<<S<<endl;
  return 0;
}

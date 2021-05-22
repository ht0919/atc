#include <bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  string ans=S;
  for (int i=0,j=S.size()-1; i<S.size(); i++,j--) {
    if (S[i]=='6') S[i]='9';
    else if (S[i]=='9') S[i]='6';
    ans[j]=S[i];
  }
  cout<<ans<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; string S; cin>>N>>S;
  string ans="No";
  
  if (N%2==1) {
    if (N==1 && S[0]=='/') {
      ans="Yes";
    } else if (S[N/2]=='/') {
      int i=0;
      for (; i<N/2; i++) {
        if (S[i]!='1') break;
      }
      if (i==N/2) {
        for (i++; i<N; i++) {
          if (S[i]!='2') break;
        }
        if (i==N) ans="Yes";
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
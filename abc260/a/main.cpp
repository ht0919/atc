#include <bits/stdc++.h>
using namespace std;
int main() {
      string S,ans; cin>>S;

      if (S[0] == S[1] && S[0] != S[2]) {
            ans = S[2];
      } else if (S[0] == S[2] && S[0] != S[1]) {
            ans = S[1];
      } else if (S[1] == S[2] && S[1] != S[0]) {
            ans = S[0];
      } else if (S[0] != S[1] && S[0] != S[2] && S[1] != S[2]) {
            ans = S[0];
      } else {
            ans = "-1";
      }
      cout<<ans<<endl;
      return 0;
}
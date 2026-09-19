#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,T; cin>>S;
  if(S.ends_with('e')) {
    T = S+'r';
  } else {
    T = S+"er";
  }
  cout<<T<<endl;
  return 0;
}

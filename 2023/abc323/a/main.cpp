#include <bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  bool f=true;
  for (int i=1; i<=16; i+=2) {
    if (S[i]=='1') {
      f=false;
      break;
    }
  }
  if (f) cout<<"Yes"<<endl;
  else   cout<<"No"<<endl;
  return 0;
}
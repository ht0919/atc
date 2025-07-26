#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; string S; cin>>N>>S;
  bool f=false;
  for (int i=0; i<N; i++) {
    if (S[i]=='x') {
      f=false;
      break;
    } else if (S[i]=='o') {
      f=true;
    }
  }
  if (f) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
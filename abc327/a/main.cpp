#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; string S; cin>>N>>S;
  bool f=false;
  char before=S[0];
  for (int i=1; i<N; i++) {
    if ((before=='a'&&S[i]=='b')||(before=='b'&&S[i]=='a')) {
      f=true; break;
    }
    before=S[i];
  }
  if (f) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
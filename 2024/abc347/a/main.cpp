#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,K; cin>>N>>K;
  bool first=true;
  for (int i=0,tmp,f=0; i<N; i++) {
    cin>>tmp;
    if ((tmp % K)==0) {
      if (first==false && i<N) cout<<' ';
      cout<<(tmp/K);
      first=false;
    }
  }
  cout<<endl;
  return 0;
}
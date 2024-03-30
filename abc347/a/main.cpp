#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,K; cin>>N>>K;
  for (int i=0,tmp,f=0; i<N; i++) {
    cin>>tmp;
    if ((tmp % K)==0) {
      if (f!=0 && i<N) cout<<' ';
      cout<<(tmp/K);
      f=1;
    }
  }
  cout<<endl;
  return 0;
}
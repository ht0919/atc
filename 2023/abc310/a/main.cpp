#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,P,Q; cin>>N>>P>>Q;
  int D=100000,tmp;
  for (int i=0; i<N; i++) {
    cin>>tmp; if (D>tmp) D=tmp;
  }
  if (P>D+Q) P=D+Q;
  cout<<P<<endl;
  return 0;
}
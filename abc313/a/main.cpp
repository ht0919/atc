#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin>>N;
  int One=0,Max=0,Min=101;
  cin>>One;
  for (int i=1; i<N; i++) {
    int P; cin>>P;
    if (Max<P) Max=P;
    if (Min>P) Min=P;
  }
  if (Min==Max) cout<<1<<endl;
  else if (Max>=One) cout<<((Max-One)+1)<<endl;
  else cout<<0<<endl;
  return 0;
}
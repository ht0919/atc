#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,M; cin>>N>>M;
  int div = M / N;
  int mod = M % N;
  if (mod==0) {
    for (int i=0; i<N; i++)
      cout<<div<<endl;
  } else {
    for (int i=0; i<N; i++) {
      if (mod>0) {
        cout<<div+1<<endl;
        mod--;
      } else {
        cout<<div<<endl;
      }
    }
  }
  return 0;
}

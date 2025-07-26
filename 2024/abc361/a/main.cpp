#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,K,X,A; cin>>N>>K>>X;
  for (int i=0; i<N; i++) {
    cin>>A; cout<<A;
    if (i<N-1) cout<<" ";
    if ((i+1)==K) {
      if (i==N-1) cout<<" ";
      cout<<X;
      if (i<N-1) cout<<" ";
    }
  }
  cout<<endl;
  return 0;
}
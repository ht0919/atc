#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,N,ans=0; cin>>N;
  for (int i=0; i<N; i++) {
    int t=0;
    for (int j=0; j<7; j++) {
      cin>>A; t += A;
    }
    cout<<t;
    if (i<N-1) cout<<' ';
  }
  cout<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,L,R; cin>>N>>L>>R;
  int A[N];
  for (int i=0; i<N; i++) {
    A[i] = i + 1;
  }
  for (int i=L-1,j=0; i<R; i++, j++) {
    A[i] = R - j;
  }
  for (int i=0; i<N; i++) {
    cout<<A[i];
    if (i<N-1) cout<<' ';
  }
  cout<<endl;
  return 0;
}
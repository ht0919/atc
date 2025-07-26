#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,K; cin>>N>>K;
  int A[N],B[N];
  for (int i=0; i<N; i++) cin>>A[i];

  for (int i=0,j=N-K; j<N; i++,j++) B[i]=A[j];
  for (int i=K,j=0;   i<N; i++,j++) B[i]=A[j];

  for (int i=0; i<N; i++) {
    cout<<B[i];
    if (i<N-1) cout<<' ';
  }
  cout<<endl;
  return 0;
}

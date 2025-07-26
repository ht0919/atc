#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,K; cin>>N>>K; int A[N];
  for (int i=0; i<N; i++) cin>>A[i];
  for (int i=0; i<K; i++) {
    for (int j=0; j<N-1; j++) A[j]=A[j+1];
    A[N-1]=0;
  }
  for (int i=0; i<N; i++) {
    cout<<A[i];
    if (i<N-1) cout<<' ';
    else cout<<endl;
  }
  return 0;
}
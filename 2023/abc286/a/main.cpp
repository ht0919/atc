#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,P,Q,R,S; cin>>N>>P>>Q>>R>>S;
  int A[N];
  for (int i=0; i<N; i++) cin>>A[i];
  for (int i=-1,tmp; i<(Q-P); i++) {
    tmp = A[i+P];
    A[i+P] = A[i+R];
    A[i+R] = tmp;
  }
  for (int i=0; i<N-1; i++) {
    cout<<A[i]<<" ";
  }
  cout<<A[N-1]<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin>>N;
  string S[N]; int A[N],min=1000000000,idx=0;
  for (int i=0; i<N; i++) {
    cin>>S[i]>>A[i];
    if (min>A[i]) {
      idx=i;
      min=A[i];
    }
  }
  for (int i=0; i<N; i++) {
    cout<<S[idx]<<endl;
    idx++;
    if (idx==N) idx=0;
  }
  return 0;
}
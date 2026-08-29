#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin>>N;
  int A[N];
  for (int i=0; i<N; i++) cin>>A[i];
  for (int i=0; i<N; i++) {
    for (int j=i+1; j<N; j++) {
      if (A[i]!=0 && A[i]==A[j]) {
        A[i]=0;
        A[j]=0;
        break;
      }
    }
  }
  int sum=0;
  for (int i=0; i<N; i++) sum+=A[i];
  cout<<sum<<endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,T; cin>>N>>T;
  int C[N],R[N];
  bool f=false;
  for (int i=0; i<N; i++) {
    cin>>C[i];
    if (C[i]==T) f=true; 
  }
  for (int i=0; i<N; i++) {
    cin>>R[i];
  }
  int max=0, p=0;
  for (int i=0; i<N; i++) {
    if (f==true) {
      if (C[i]==T && max<R[i]) {
        max=R[i];
        p=i;
      }
    } else {
      if (C[i]==C[0] && max<R[i]) {
        max=R[i];
        p=i;
      }
    }
  }
  cout<<p+1<<endl;
  return 0;
}
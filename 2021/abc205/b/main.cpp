#include <bits/stdc++.h>
using namespace std;
int A[1001];
int main() {
  int N,n; cin>>N;
  bool f=true;
  for (int i=0; i<N; i++) {
    cin>>n;
    if (A[n]==-1) {
      f=false;
      break;
    }
    A[n]=-1;
  }
  if (f) cout<<"Yes"<<endl;
  else   cout<<"No"<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,Q; cin>>N>>Q;
  int X[N];
  for (int i=0; i<N; i++) X[i]=0;
  for (int i=0; i<Q; i++) {
    int e,d; cin>>e>>d;
    switch (e) {
      case 1: X[d-1]++; break;
      case 2: X[d-1]=2; break;
      case 3:
        if (X[d-1]>=2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,A,B;cin>>N;
  cin>>B;
  for (int i=1; i<N; i++) {
    cin>>A;
    cout<<A*B;
    if (i<N-1) cout<<' ';
    B=A;
  }
  cout<<endl;
  return 0;
}
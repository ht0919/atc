#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,D,T,B; cin>>N>>D;
  cin>>T; B=T;
  for (int i=1; i<N; i++) {
    cin>>T;
    if (T-B<=D) {
      cout<<T<<endl;
      return 0;
    }
    B=T;
  }
  cout<<"-1"<<endl;
  return 0;
}
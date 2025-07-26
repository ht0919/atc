#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,M,L; cin>>N;
  bool f=true;
  cin>>M;
  for (int i=0; i<N-1; i++) {
    cin>>L;
    if (M!=L) {
      f=false;
      break;
    }
    M=L;
  }
  if (f) cout<<"Yes"<<endl;
  else   cout<<"No"<<endl;
  return 0;
}
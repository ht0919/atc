#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,X,P,ans=0; cin>>N>>X;
  for (int i=0; i<N; i++) {
    cin>>P;
    if (P==X) {
      ans=i+1;
      break;
    }
  }
  cout<<ans<<endl; 
  return 0;
}
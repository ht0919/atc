#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,a=0; cin>>N;
  string S,ans="No"; 
  for (int i=0; i<N; i++) {
    cin>>S;
    if (S=="For") a++;
  }
  if (a>N/2) ans="Yes";
  cout<<ans<<endl;
  return 0;
}
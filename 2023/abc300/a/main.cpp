#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,A,B,ans=0; cin>>N>>A>>B;
  for (int i=0; i<N; i++) {
    int tmp; cin>>tmp;
    if (tmp==(A+B)) {
      ans=i+1; break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
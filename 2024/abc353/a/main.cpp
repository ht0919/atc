#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,H; cin>>N;
  cin>>H;
  int tmp,ans=-1,max=0;
  for (int i=1; i<N; i++) {
    cin>>tmp;
    if (max<tmp) {
      max=tmp;
      if (H<max) {
        ans = i + 1;
        break;
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
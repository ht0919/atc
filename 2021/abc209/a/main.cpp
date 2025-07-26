#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B,ans=0; cin>>A>>B;
  if (A<B) {
    ans = B - A + 1;
  }
  cout<<ans<<endl;
  return 0;
}
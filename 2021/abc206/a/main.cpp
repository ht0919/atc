#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,n; cin>>N; n=N*1.08;
  string ans;
  if (n<206) {ans="Yay!";}
  else if (n>206) {ans=":(";}
  else {ans="so-so";}
  cout<<ans<<endl;
  return 0;
}
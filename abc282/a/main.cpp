#include <bits/stdc++.h>
using namespace std;
int main() {
  int K; cin>>K;
  string ans=""; char c='A';
  for (int i=0; i<K; i++) {
    ans += c;
    c++;
  }
  cout<<ans<<endl;
  return 0;
}
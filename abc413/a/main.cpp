#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,M,sum=0; cin>>N>>M;
  string ans="Yes";
  for (int i=0; i<N; i++) {
    int a; cin>>a;
    sum += a;
  }
  if (sum > M) ans = "No";
  cout << ans << endl;
  return 0;
}
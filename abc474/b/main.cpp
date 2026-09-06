#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin>>N;
  vector<int> P(N);
  for (int i=0; i<N; i++) cin>>P[i];

  int prev_group = -1;
  string ans = "Yes";
  for (int i=0; i<N; i++) {
    int g = (P[i] - 1) / 10;
    if (g < prev_group) {
      ans="No";
      break;
    }
    prev_group = g;
  }
  cout<<ans<<endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,X; cin >> N;
  vector<int> A(N);
  for(int i = 0; i < N; i++) {  
    cin >> A[i];
  }
  string ans="No";
  cin >> X;
  for (int i = 0; i < N; i++) {
    if (A[i] == X) {
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
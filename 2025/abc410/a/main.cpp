#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin >> N;
  int A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  int K,ans=0; cin >> K;
  for (int i = 0; i < N; i++) {
    if (A[i] >= K) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
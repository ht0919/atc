#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  int C[N];
  for (int i = 0; i < N; i++)
    C[i] = 0;
  for (int i = 0; i < N; i++) {
    int t;
    cin >> t;
    C[t - 1]++;
  }
  sort(C, C + N, greater<int>());
  cout << (N - C[0]) << endl;
  return 0;
}

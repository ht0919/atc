#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B;
  cin >> A >> B;
  string ans = "Nein";
  if (A + B == 9 || A - B == 9 || A * B == 9 ||
      static_cast<double>(A) / B == 9.0) {
    ans = "Nine";
  }
  cout << ans << endl;
  return 0;
}

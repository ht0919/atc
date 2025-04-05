#include <bits/stdc++.h>
using namespace std;
int main() {
  int A; cin >> A;
  int B = 400 / A;
  if ((400 % A) != 0) {
    cout << "-1" << endl;
  } else {
    cout << B << endl;
  }
  return 0;
}
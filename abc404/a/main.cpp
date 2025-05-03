#include <bits/stdc++.h>
using namespace std;
int main() {
  string alpha="abcdefghijklmnopqrstuvwxyz";
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < alpha.size(); i++) {
    bool f=false;
    for (int j=0; j < n; j++) {
      if (alpha[i] == s[j]) {
        f=true;
        break;
      }
    }
    if (f==false) {
      cout << alpha[i] << endl;
      return 0;
    }
  }
  return 0;
}
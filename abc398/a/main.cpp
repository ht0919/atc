#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin >> N;
  string ans="";
  if (N%2==0) {
    for (int i=0; i<N; i++) ans += '-';
    ans[N/2]= '=';
    ans[N/2-1]= '=';
  } else {
    for (int i=0; i<N; i++) ans += '-';
    ans[N/2]= '=';
  }
  cout << ans << endl;
  return 0;
}
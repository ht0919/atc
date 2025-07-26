#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,ans="No"; cin>>S;
  string Tbl[3]={"RMS","SRM","RSM"};
  for (string T : Tbl) {
    if (T==S) {
      ans="Yes";
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
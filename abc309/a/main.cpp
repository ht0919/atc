#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B; cin>>A>>B;
  string ans="Yes";
  if (A==3||A==6||A==9||B-A!=1) {
    ans="No";
  }
  cout<<ans<<endl;
  return 0;
}
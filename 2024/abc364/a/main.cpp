#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin>>N;
  bool f=false;
  string before="", now, ans="Yes";
  for (int i=0; i<N; i++) {
    cin>>now;
    if (f) {
      ans="No";
      break;
    }
    if (now=="sweet" && before=="sweet") f=true;
    before=now;
  }
  cout<<ans<<endl;
  return 0;
}
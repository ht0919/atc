#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b; cin>>a>>b;
  string ans = "No";
  for (int i=1,j=2; i<8; i++,j+=2) {
    if (a==i && (b==j || b==j+1)) {
      ans = "Yes";
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
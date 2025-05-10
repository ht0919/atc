#include <bits/stdc++.h>
using namespace std;
int main() {
  int R,X; cin>>R>>X;
  string ans="No";
  if (X==1 && R>=1600 && R<=2999) ans="Yes";
  if (X==2 && R>=1200 && R<=2399) ans="Yes";
  cout<<ans<<endl;
  return 0;
}
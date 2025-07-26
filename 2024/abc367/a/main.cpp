#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B,C; cin>>A>>B>>C;
  string ans="No";
  if (B<C && (A<B || A>C)) ans="Yes";
  if (B>C && (A<B && A>C)) ans="Yes";
  cout<<ans<<endl;
  return 0;
}
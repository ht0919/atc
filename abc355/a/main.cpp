#include <bits/stdc++.h>
using namespace std;
int main() {
  int tbl[3][3]={{-1, 3, 2},{ 3,-1, 1},{ 2, 1,-1}};
  int A,B; cin>>A>>B;
  int ans=tbl[A-1][B-1];
  cout<<ans<<endl;
  return 0;
}
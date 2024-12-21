#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B,C; cin>>A>>B>>C;
  string ans="No";
  if ((A==B)&&(B==C)) ans="Yes";
  if ((A==B+C)||(B==A+C)||(C==A+B)) ans="Yes";
  cout<<ans<<endl;
  return 0;
}
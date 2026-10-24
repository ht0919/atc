# include<bits/stdc++.h>
using namespace std;
int main() {
  int A,B,C; cin>>A>>B;
  int ans = 0;
  C = A + B;
  ans = to_string(C).length();
  cout<<ans<<endl;
  return 0;
}
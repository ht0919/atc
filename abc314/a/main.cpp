#include <bits/stdc++.h>
using namespace std;
int main() {
  string pi="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
  int N; cin>>N;
  string ans = pi.substr(0,N+2);
  cout<<ans<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  int a = S[0] - 0x30;
  int b = S[2] - 0x30;
  cout<<(a*b)<<endl;
  return 0;
}
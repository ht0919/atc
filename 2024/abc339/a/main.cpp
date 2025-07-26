#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,T=""; cin>>S;
  for (int i=S.length()-1; i>=0; i--) {
    if (S[i]=='.') break;
    T+=S[i];
  }
  reverse(T.begin(), T.end());
  cout<<T<<endl;
  return 0;
}
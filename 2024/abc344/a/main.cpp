#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,T=""; cin>>S;
  for (int i=0; i<S.length(); i++) {
    if (S[i] == '|') {
      for (i++ ; i<S.length(); i++) {
        if (S[i] == '|') break;
      }
    } else {
      T += S[i];
    }
  }
  cout<<T<<endl;
  return 0;
}
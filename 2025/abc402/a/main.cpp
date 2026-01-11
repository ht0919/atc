#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,T=""; cin>>S;
  for (int i=0; i<S.size(); i++) {
    if (S[i] >= 'A' && S[i] <= 'Z') {
        T += S[i];
    }
  }
  cout<<T<<endl;
  return 0;
}
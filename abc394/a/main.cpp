#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,A=""; cin>>S;
  for (int i=0; i<(int)(S.length()); i++) {
    if (S[i]=='2') A=A+S[i];
  }
  cout<<A<<endl;
  return 0;
}
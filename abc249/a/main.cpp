#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B,C,D,E,F,X; cin>>A>>B>>C>>D>>E>>F>>X;
  int Takahashi=0, Aoki=0;
  for (int i=0; i<X; i++) {
    if (i % (A + C) < A) {
        Takahashi += B;
    }
    if (i % (D + F) < D) {
        Aoki += E;
    }
  }
  if (Takahashi > Aoki) {
    cout<<"Takahashi"<<endl;
  } else if (Takahashi < Aoki) {
    cout<<"Aoki"<<endl;
  } else {
    cout<<"Draw"<<endl;
  }
  return 0;
}
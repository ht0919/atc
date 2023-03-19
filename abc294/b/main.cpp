#include <bits/stdc++.h>
using namespace std;
int main() {
  char T[]={' ',
        'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
        'O','P','Q','R','S','T','U','V','W','X','Y','Z'
        };
  int H,W; cin>>H>>W;
  int A[W];
  for (int i=0; i<H; i++) {
    for (int j=0; j<W; j++) cin>>A[j];
    for (int j=0; j<W; j++) {
      if (A[j]==0) cout<<'.';
      else cout<<T[A[j]];
    }
    cout<<endl;
  }
  return 0;
}
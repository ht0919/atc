#include <bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  int B1=0,B2=0,R1=0,R2=0,K=0;
  for (int i=0; i<(int)S.length(); i++) {
    switch(S[i]) {
      case 'B':
        if (B1==0) B1=i+1;
        else       B2=i+1;
        break;
      case 'R':
        if (R1==0) R1=i+1;
        else       R2=i+1;
        break;
      case 'K':
        K=i+1;
        break;
    }
  } 
  if ((B1%2 != B2%2)&&(K>R1 && K<R2)) {
    cout<<"Yes"<<endl;
  } else {
    cout<<"No"<<endl;
  }
  return 0;
}
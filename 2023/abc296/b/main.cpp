#include <bits/stdc++.h>
using namespace std;
int main() {
  int  X[]={8,7,6,5,4,3,2,1};
  char Y[]={'a','b','c','d','e','f','g','h'};
  for (int i=0; i<8; i++) {
    string S; cin>>S;
    for (int j=0; j<8; j++) {
      if (S[j]=='*') {
        cout<<Y[j]<<X[i]<<endl;
        break;
      }
    }
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; string S;
  cin>>N>>S;
  bool A=false, B=false, C=false;
  int i=0;
  for (; i<N; i++) {
    switch(S[i]) {
      case 'A': A=true; break;
      case 'B': B=true; break;
      case 'C': C=true; break;
    }
    if (A&&B&&C) break;
  }
  cout<<(i+1)<<endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; string S; cin>>N>>S;
  int A=0,T=0; string Win="";
  for (int i=0; i<N; i++) {
    if (S[i]=='T') T++;
    else A++;
    if (A>T) Win="A";
    else if (A<T) Win="T";
  }
  cout<<Win<<endl;
  return 0;
}

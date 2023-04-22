#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,m=0; string S; cin>>N>>S;
  for (int i=0; i<N; i++) {
    if (S[i]=='|') m++;
    if (S[i]=='*') break; 
  }
  if (m==1) cout<<"in"<<endl;
  else cout<<"out"<<endl;
  return 0;
}
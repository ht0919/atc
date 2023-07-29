#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,tbl[]={"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};
  cin>>S;
  bool f=false;
  for (int i=0; i<7; i++) {
    if (S==tbl[i]) f=true;
  }
  if (f) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
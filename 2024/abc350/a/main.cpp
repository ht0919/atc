#include <bits/stdc++.h>
using namespace std;
int main() {
  string S,A="No"; cin>>S;
  if (S[0]=='A' and S[1]=='B' and S[2]=='C') {
    int tmp = stoi(S.substr(3));
    if (tmp>=1 and tmp<=349 and tmp!=316) {
      A="Yes";
    }
  }
  cout<<A<<endl;
  return 0;
}
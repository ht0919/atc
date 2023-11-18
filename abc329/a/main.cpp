#include <bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  for (int i=0; i<(int)S.size()-1; i++) {
    cout<<S[i]<<' ';
  }
  cout<<S[S.size()-1]<<endl;
  return 0;
}

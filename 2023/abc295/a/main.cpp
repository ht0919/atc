#include <bits/stdc++.h>
using namespace std;
int main() {
  string word[]={"and", "not", "that", "the", "you"};
  bool flg = false;
  int N; cin>>N;
  for (int i=0; i<N; i++) {
    string S; cin>>S;
    for (int j=0; j<5; j++) {
      if (S == word[j]) {
        flg = true;
        break;
      }
      if (flg) break;
    }
  }
  if (flg) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
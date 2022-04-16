#include <bits/stdc++.h>
using namespace std;
int main() {
  string S; cin>>S;
  for (int i=0; i<10; i++) {
    if (S.find(to_string(i))>9) {
      cout<<i<<endl;
      break;
    }
  }
  return 0;
}

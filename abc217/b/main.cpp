#include <bits/stdc++.h>
using namespace std;
int main() {
  map<string, int> mp={{"ABC",0},{"ARC",0},{"AGC",0},{"AHC",0}};
  for (int i=0; i<3; i++) {
    string S; cin>>S;
    auto itr = mp.find(S);
    mp.erase(itr);
  }
  auto itr = mp.begin();
  cout << itr->first << endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
map<string, int> map1 = {
  {"Monday", 5},
  {"Tuesday", 4},
  {"Wednesday", 3},
  {"Thursday", 2},
  {"Friday", 1}
};
int main() {
  string S; cin>>S;
  cout<<map1[S]<<endl;
  return 0;
}
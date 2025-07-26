#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin>>N;
  map<int, string> m;
  for (int i=0; i<N; i++) {
    string S; int T;
    cin>>S>>T; m[T]=S;
  }
  auto iter = m.begin();
  iter = next(iter, N-2);
  cout<<iter->second<<endl;
  return 0;
}
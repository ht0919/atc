#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,A=0; cin>>N;
  for (int i=0; i<N-1; i++) {
    int tmp; cin>>tmp;
    A += tmp;
  }
  cout<<A*(-1)<<endl;
  return 0;
}
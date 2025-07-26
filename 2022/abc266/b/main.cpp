#include <bits/stdc++.h>
using namespace std;
int main() {
  long long int N; cin>>N;
  int i=0;
  for (; i<998244353; i++) {
    if ((N-i)%998244353==0) break;
  }
  cout<<i<<endl;
  return 0;
}

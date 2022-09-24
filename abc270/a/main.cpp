#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B; cin>>A>>B;
  bitset<32> bsA(A);
  bitset<32> bsB(B);
  bitset<32> bsC = bsA | bsB;
  cout<<bsC.to_ulong()<<endl;
  return 0;
}

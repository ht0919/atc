#include <bits/stdc++.h>
using namespace std;
int f(int n) {
  if (n==0) return 1;
  return n * f(n-1);
}
int main() {
  int N; cin>>N;
  cout<<f(N)<<endl;
  return 0;
}

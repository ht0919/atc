#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,a; cin>>N;
  for (int i=0; i<N; i++) {
    cin>>a;
    if (a%2==0) cout<<a<<' ';
  }
  cout<<endl;
  return 0;
}
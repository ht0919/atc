#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,i,sum=0; cin>>N;
  for (i=1; sum<N; i++) {
    sum += i;
  }
  i--;
  cout<<i<<endl;
  return 0;
}
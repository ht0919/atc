#include <bits/stdc++.h>
using namespace std;
int main() {
  int64_t N,i=0,a; cin>>N;
  a = log10(i) + 1;
  while(i + i * pow(10,a) <= N) {
    i++;
    a = log10(i) + 1;
  }
  cout<<i-1<<endl;
  return 0;
}
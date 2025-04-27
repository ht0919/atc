#include <bits/stdc++.h>
using namespace std;
int main() {
  int N,sum=0; cin>>N;
  for (int i=1;i<=N;i++) {
    int a; cin>>a;
    if (i%2==0) continue;
    sum+=a;
  }
  cout<<sum<<endl;
  return 0;
}